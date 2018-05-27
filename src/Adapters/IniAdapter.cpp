/*
 * Ini2Config.cpp
 *
 *  Created on: 27 мая 2018 г.
 *      Author: romanko
 */

#include <Adapters/IniAdapter.hpp>

namespace Dolly
{
namespace Adapters
{

void IniAdapter::toConfig(const Parsers::Ini &ini, const std::string &section,
		Containers::Config &cfg)
{
	auto keys = ini.getKeysList(section);

	for (std::string keyname : keys)
		cfg.setString(keyname, ini.get(section, keyname));
}

void IniAdapter::toIni(const Containers::Config &cfg, Parsers::Ini &ini,
		const std::string &section)
{
	auto keys = cfg.getKeysList();

	for (std::string keyname : keys)
		ini.set(section, keyname, cfg.getString(keyname));
}

}
}
