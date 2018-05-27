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

#include <Parsers/Ini.hpp>
#include <map>
#include <string>
#include <regex>
#include <iostream>
#include <fstream>

namespace Dolly
{
namespace Parsers
{

std::string Ini::Section::get(const std::string &key, const std::string &def) const
{
	auto keyIter = m_keys.find(key);

	if (keyIter == m_keys.end())
		return def;

	return keyIter->second;
}

void Ini::Section::set(const std::string &key, const std::string &value)
{
	auto keyIter = m_keys.find(key);

	if (keyIter == m_keys.end())
		m_keys.insert(std::pair<std::string, std::string>(key, value));
	else
		keyIter->second = value;
}

std::vector<std::string> Ini::Section::getList() const
{
	std::vector<std::string> result;

	for(auto iter : m_keys)
		result.push_back(iter.first);

	return result;
}

void Ini::set(const std::string &section, const std::string &key, const std::string &value)
{
	auto sectionIter = m_sections.find(section);

	if (sectionIter == m_sections.end())
	{
		Section newSection;
		newSection.set(key, value);
		m_sections.insert(std::pair<std::string, Section>(section, newSection));
	}
	else
	{
		sectionIter->second.set(key, value);
	}
}

std::string Ini::get(const std::string &section, const std::string &key, const std::string &def) const
{
	auto sectionIter = m_sections.find(section);

	if (sectionIter == m_sections.end())
		return def;

	return sectionIter->second.get(key, def);
}

bool Ini::load(const std::string &filename)
{
	// (^\S*)\s*=\s*(.*) - for key
	// \[(.*)\] - section
	std::regex keyRegex("(^\\S*)\\s*=\\s*(.*)");
	std::regex sectionRegex("\\[(.*)\\]");

	std::ifstream file(filename);

	if (file.is_open())
	{
		std::string section = "general";
		while (file.eof() == false)
		{
			std::string str;
			std::getline(file, str);
			std::smatch match;
			if (std::regex_match(str, match, sectionRegex))
			{
				section = match[1];
			} else if (std::regex_match(str, match, keyRegex))
			{
				set(section, match[1], match[2]);
			}
		}
		return true;
	}

	return false;
}

bool Ini::save(const std::string &filename) const
{
	std::ofstream file(filename);

	if (file.is_open())
	{
		for (auto iter : m_sections)
		{
			file << "[" << iter.first << "]" << std::endl;
			auto keys = iter.second.getList();
			for(std::string key : keys)
				file << key << "=" << iter.second.get(key) << std::endl;
		}
		file.close();
		return true;
	}

	return false;
}

std::vector<std::string> Ini::getSectionList() const
{
	std::vector<std::string> result;

	for(auto iter : m_sections)
		result.push_back(iter.first);

	return result;
}

std::vector<std::string> Ini::getKeysList(const std::string &section) const
{
	std::vector<std::string> result;

	auto sectionIter = m_sections.find(section);
	if(sectionIter != m_sections.end())
		return sectionIter->second.getList();

	return result;
}


}
}
