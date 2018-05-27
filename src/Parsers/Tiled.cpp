/*
 * Tiled.cpp
 *
 *  Created on: 22 мая 2018 г.
 *      Author: romanko
 */

#include <Parsers/Tiled.hpp>

#include <thirdparty/pugixml.hpp>
#include <Utils/Base64.h>
#include <sstream>
#include <cassert>
#include <cstdint>
#include <iostream>
#include <string>
#include <algorithm>


namespace Dolly
{
namespace Parsers
{

bool Tiled::load(const std::string filename) {
	m_groups.clear();
	m_layouts.clear();
	m_tilesets.clear();

	pugi::xml_document root;

	pugi::xml_parse_result result = root.load_file(filename.c_str());

	if (!result) {
		std::cerr << "xml_document(" << filename << ") failed." << std::endl
				<< result.description() << std::endl;
		std::cerr << "Offset: " << result.offset << std::endl;
		return false;
	}

	pugi::xml_node doc = root.child("map");

	width = doc.attribute("width").as_int(0);
	height = doc.attribute("height").as_int(0);
	tileheight = doc.attribute("tileheight").as_int(0);
	tilewidth = doc.attribute("tileheight").as_int(0);

	for (pugi::xml_node layouts = doc.child("layer"); layouts;
			layouts = layouts.next_sibling("layer")) {
		Layout l;
		l.name = std::string(layouts.attribute("name").as_string());
		l.width = layouts.attribute("width").as_int(0);
		l.height = layouts.attribute("height").as_int(0);

		pugi::xml_node data = layouts.child("data");
		assert(data != NULL);

		std::string encoding = std::string(
				data.attribute("encoding").as_string());

		if (encoding == "xml") {
			for (pugi::xml_node tile = data.child("tile"); tile;
					tile = tile.next_sibling("tile")) {
				l.data.push_back(tile.attribute("gid").as_int(0));
			}
		} else if (encoding == "csv") {

			std::stringstream csv(data.text().as_string());
			std::string line;

			while (getline(csv, line, '\n')) {
				std::stringstream lineStream(line);
				std::string value;
				while (getline(lineStream, value, ',')) {
					l.data.push_back(atoi(value.c_str()));
				}
			}
		} else if (encoding == "base64") {
			std::string compression = std::string(
					data.attribute("compression").as_string("none"));
			std::string base = data.text().as_string();
			std::vector<unsigned char> raw;

			base.erase(remove(base.begin(), base.end(), ' '), base.end());
			base.erase(remove(base.begin(), base.end(), '\n'), base.end());
			base.erase(remove(base.begin(), base.end(), '\t'), base.end());

			if (compression == "none") {
				if (!Base64Decode(base, raw, false)) {
					std::cerr << "TMX base64 has incorect data" << std::endl;
				}
			} else {
				if (!Base64Decode(base, raw, true)) {
					std::cerr << "TMX base64 has incorect data" << std::endl;
				}
			}
			int32_t *d = (int32_t*) raw.data();
			for (size_t i = 0; i < raw.size() / 4; i++) {
				l.data.push_back(d[i]);
			}
		}
		m_layouts.push_back(l);
	}

	for (pugi::xml_node objgroup = doc.child("objectgroup"); objgroup;
			objgroup = objgroup.next_sibling("objectgroup")) {
		ObjectGroup og;
		og.name = std::string(objgroup.attribute("name").as_string());

		for (pugi::xml_node objs = objgroup.child("object"); objs;
				objs = objs.next_sibling("object")) {
			Object o;
			o.id = objs.attribute("id").as_int();
			o.gid = objs.attribute("gid").as_int(0);
			o.x = objs.attribute("x").as_int();
			o.y = objs.attribute("y").as_int();
			o.width = objs.attribute("width").as_int();
			o.height = objs.attribute("height").as_int();

			if (objs.child("properties")) {
				for (pugi::xml_node props = objs.child("properties").child(
						"property"); props;
						props = props.next_sibling("property")) {

					Property p;
					p.name = std::string(props.attribute("name").as_string());
					std::string selector = std::string(
							props.attribute("type").as_string());
					std::string value = std::string(
							props.attribute("value").as_string());

					if (selector == "bool") {
						p.type = p.boolean;
						if (value == "true")
							p.bvalue = true;
						else
							p.bvalue = false;
					}
					if (selector == "color") {
						p.type = p.color;
						int red, green, blue;
						/// @attention DO NOT PASS CHAR VALUES INTO SSCANF WITH %X OPTION!
						sscanf(value.c_str(), "#%02x%02x%02x", &red, &green,
								&blue);

						p.cvalue.red = red;
						p.cvalue.green = green;
						p.cvalue.blue = blue;
					}
					if (selector == "file") {
						p.type = p.file;
						p.svalue = value;
					}
					if (selector == "string") {
						p.type = p.string;
						p.svalue = value;
					}
					if (selector == "float") {
						p.type = p.floating;
						p.fvalue = std::atof(value.c_str());
					}
					if (selector == "int") {
						p.type = p.integer;
						p.ivalue = std::atoi(value.c_str());
					}
					o.propetries.push_back(p);
				}
			}
			og.objects.push_back(o);
		}
		m_groups.push_back(og);
	}

	for (pugi::xml_node tile = doc.child("tileset"); tile;
			tile = tile.next_sibling("tileset")) {
		Tileset ts;
		ts.firstgid = tile.attribute("firstgid").as_int();
		ts.source = std::string(tile.attribute("source").as_string());
		m_tilesets.push_back(ts);
	}
	return true;
}

}
}
