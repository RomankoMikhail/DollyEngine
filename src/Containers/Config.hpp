/*
 * Config.hpp
 *
 *  Created on: 21 мая 2018 г.
 *      Author: romanko
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
	std::vector<std::string> getKeysList() const;

	std::string getString(const std::string &key, const std::string &def = "") const;
	void setString(const std::string &key, const std::string &value);

	int getInt(const std::string &key, const int &def = 0) const;
	void setInt(const std::string &key, const int &value);

	unsigned getUInt(const std::string &key, const unsigned &def = 0) const;
	void setUInt(const std::string &key, const unsigned &value);

	float getFloat(const std::string &key, const float &def = 0) const;
	void setFloat(const std::string &key, const float &value);

	bool getBool(const std::string &key, const bool &def = false) const;
	void setBool(const std::string &key, const bool &value);
};

}
}

#endif /* SRC_CONTAINERS_CONFIG_HPP_ */
