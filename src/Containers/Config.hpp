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
 * @brief Engine configuration container class
 */

#ifndef SRC_CONTAINERS_CONFIG_HPP_
#define SRC_CONTAINERS_CONFIG_HPP_

#include <map>
#include <vector>

namespace Dolly {
namespace Containers {

class Config {
	std::map<std::string, std::string> m_data;

public:
	/**
	 * Returns all key's names, available in the container
	 * @return Key's names
	 */
	std::vector<std::string> getKeysList() const;

	/**
	 * Searches for key and returns it's value, if not found returns default value
	 * @param key key name
	 * @param def default value
	 * @return value from container or default value
	 */
	std::string getString(const std::string &key, const std::string &def = "") const;

	/**
	 * Sets the key value as string. If key dosn't exist - creates new one
	 * @param key key name
	 * @param value new key value
	 */
	void setString(const std::string &key, const std::string &value);

	/**
	 * Searches for key and tries to return it's value as integer, if not found
	 * returns default value.
	 * @param key key name
	 * @param def default value
	 * @return value from container or default value
	 * @throw std::invalid_argument if key is not integer (aka text string).
	 */
	int getInt(const std::string &key, const int &def = 0) const;

	/**
	 * Sets the key value as integer. If key dosn't exist - creates new one
	 * @param key key name
	 * @param value new value
	 */
	void setInt(const std::string &key, const int &value);

	/**
	 * Searches for key and tries to return it's value as floating point value,
	 * if not found returns default value.
	 * @param key key name
	 * @param def default value
	 * @return value from container or default value
	 * @throw std::invalid_argument if key is not float (aka text string)
	 */
	float getFloat(const std::string &key, const float &def = 0) const;

	/**
	 * Sets the key value as floating point value. If key dosn't exist - creates
	 * new one
	 * @param key key name
	 * @param value new value
	 */
	void setFloat(const std::string &key, const float &value);
};

}
}

#endif /* SRC_CONTAINERS_CONFIG_HPP_ */
