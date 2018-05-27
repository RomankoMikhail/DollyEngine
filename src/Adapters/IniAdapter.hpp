/*
 * MIT License
 *
 * Copyright (c) 2018 RomankoMikhail
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

/**
 * @file
 * @brief Engine ini adapter
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
	/**
	 * Adapts Parsers::Ini class data to Containers::Config data
	 * @param ini Parsers::Ini object reference
	 * @param section Specific section of Parsers::Ini
	 * @param cfg Containers::Config object reference
	 */
	void toConfig(const Parsers::Ini &ini, const std::string &section,
			Containers::Config &cfg);
	/**
	 * Adapts Containers::Config class data to Parsers::Ini data
	 * @param cfg Containers::Config object reference
	 * @param ini Parsers::Ini object reference
	 * @param section Specific section of Parsers::Ini
	 */
	void toIni(const Containers::Config &cfg, Parsers::Ini &ini,
			const std::string &section);
};

}
}

#endif /* SRC_ADAPTERS_INIADAPTER_HPP_ */
