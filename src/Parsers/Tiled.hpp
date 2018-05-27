#ifndef SRC_PARSERS_TILED_HPP_
#define SRC_PARSERS_TILED_HPP_

#include <string>
#include <vector>
#include <map>



namespace Dolly
{
namespace Parsers
{

class TMX
{
	struct Layout
	{
		std::string name;
		int width, height;

		std::vector<int> data;
	};

	struct Property
	{
		std::string name;

		enum
		{
			boolean, color, file, floating, integer, string
		} type;

		union
		{
			bool bvalue;
			struct
			{
				char red;
				char green;
				char blue;
			} cvalue;
			float fvalue;
			int ivalue;
		};

		std::string svalue;
	};

	struct Object
	{
		int id, gid;
		int x, y;
		int width, height;
		std::vector<Property> propetries;
	};

	struct ObjectGroup
	{
		std::vector<Object> objects;
		std::string name;
	};

	struct Tileset
	{
		std::string source;
		int firstgid = 0;
	};

public:
	bool load(const std::string filename);

	int width, height;
	int tileheight, tilewidth;

	std::vector<Layout> m_layouts;
	std::vector<ObjectGroup> m_groups;
	std::vector<Tileset> m_tilesets;

};

class TSX
{

};

}
}

#endif /* SRC_PARSERS_TILED_HPP_ */
