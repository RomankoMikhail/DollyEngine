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
 * @brief Engine .ini file parser class
 */

#ifndef SRC_PARSERS_INI_HPP_
#define SRC_PARSERS_INI_HPP_

#include <map>
#include <string>
#include <vector>

namespace Dolly
{
namespace Parsers
{

class Ini
{
private:
	class Section
	{
	public:
		void set(const std::string &key, const std::string &value);
		std::string get(const std::string &key, const std::string &def = "") const;

		std::vector<std::string> getList() const;
	private:
		std::map<std::string, std::string> m_keys;
	};

	std::map<std::string, Section> m_sections;
public:
	/**
	 * Parses ini file content into memory.
	 * @param filename ini file name
	 * @return true if load has been successful, false otherwise
	 */
	bool load(const std::string &filename);
	/**
	 * Saves information, stored in the class as ini file
	 * @param filename ini file name
	 * @return true if file has been saved, false otherwise
	 */
	bool save(const std::string &filename) const;

	/**
	 * Return the vector of strings that contains all loaded sections
	 * @return vector of all available sections as strings
	 */
	std::vector<std::string> getSectionList() const;

	/**
	 * Return the vector of strings that contains all keys of specific section
	 * @param section name of the section
	 * @return vector of all available keys of the section as strings
	 */
	std::vector<std::string> getKeysList(const std::string &section) const;

	/**
	 * Sets the string value key in specified section
	 * @param section name of the section
	 * @param key name of the key
	 * @param value string value
	 */
	void set(const std::string &section, const std::string &key, const std::string &value);

	/**
	 * Gets the string value key from specified section
	 * @param section name of the section
	 * @param key name of the key
	 * @param def default value, if key/section dosn't exist
	 * @return string value
	 */
	std::string get(const std::string &section, const std::string &key, const std::string &def = "") const;
};

}
}
#endif /* SRC_PARSERS_INI_HPP_ */
