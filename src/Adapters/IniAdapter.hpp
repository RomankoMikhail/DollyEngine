/*
 * Ini2Config.hpp
 *
 *  Created on: 27 мая 2018 г.
 *      Author: romanko
 */

#ifndef SRC_ADAPTERS_INIADAPTER_HPP_
#define SRC_ADAPTERS_INIADAPTER_HPP_

#include <Containers/Config.hpp>
#include <Parsers/Ini.hpp>

namespace Dolly
{
namespace Adapters
{

class IniAdapter
{
public:
	void toConfig(const Parsers::Ini &ini, const std::string &section, Containers::Config &cfg);
	void toIni(const Containers::Config &cfg, Parsers::Ini &ini, const std::string &section);
};

}
}

#endif /* SRC_ADAPTERS_INIADAPTER_HPP_ */
