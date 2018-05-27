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

unsigned Config::getUInt(const std::string &key, const unsigned &def) const
{
	return std::stoul(getString(key, std::to_string(def)));
}

void Config::setUInt(const std::string &key, const unsigned &value)
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

bool Config::getBool(const std::string &key, const bool &def) const
{
	return getInt(key, def);
}

void Config::setBool(const std::string &key, const bool &value)
{
	setInt(key, value);
}

}
}
