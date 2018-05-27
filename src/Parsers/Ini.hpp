/*
 * Ini.hpp
 *
 *  Created on: 27 мая 2018 г.
 *      Author: romanko
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
	bool load(const std::string &filename);
	bool save(const std::string &filename) const;

	std::vector<std::string> getSectionList() const;
	std::vector<std::string> getKeysList(const std::string &section) const;
	void set(const std::string &section, const std::string &key, const std::string &value);
	std::string get(const std::string &section, const std::string &key, const std::string &def = "") const;
};

}
}
#endif /* SRC_PARSERS_INI_HPP_ */
