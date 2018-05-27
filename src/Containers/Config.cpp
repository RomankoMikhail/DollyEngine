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
#include "Config.hpp"

namespace Dolly {
namespace Containers {

std::vector<std::string> Config::getKeysList() const
{
	std::vector<std::string> result;

	for(auto keys : m_data)
		result.push_back(keys.first);

	return result;
}

std::string Config::getString(const std::string &key, const std::string &def) const
{
	auto iter = m_data.find(key);

	if(iter == m_data.end())
		return def;
	return iter->second;
}

void Config::setString(const std::string &key, const std::string &value)
{
	auto iter = m_data.find(key);

	if(iter == m_data.end())
	{
		m_data.insert(std::pair<std::string,std::string>(key, value));
	}
	else
	{
		iter->second = value;
	}
}

int Config::getInt(const std::string &key, const int &def) const
{
	return std::stoi(getString(key, std::to_string(def)));
}

void Config::setInt(const std::string &key, const int &value)
{
	setString(key, std::to_string(value));
}

float Config::getFloat(const std::string &key, const float &def) const
{
	return std::stof(getString(key, std::to_string(def)));
}

void Config::setFloat(const std::string &key, const float &value)
{
	setString(key, std::to_string(value));
}

}
}
