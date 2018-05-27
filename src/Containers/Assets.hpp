/**
 * @file
 * @brief Engine resource management class
 */

#ifndef SRC_CONTAINERS_ASSETS_HPP_
#define SRC_CONTAINERS_ASSETS_HPP_

#include <SFML/System.hpp>
#include <stdexcept>
#include <memory>
#include <map>

/**
 * Assets class for storing and accessing contents in generalized manner
 * @bug loadFromFile not working with sf::Music, use other manager instead
 */
namespace Dolly {
namespace Containers {


template<typename Identifier, typename Resource>
class Assets {
public:
	/**
	 * Manually adds an asset to internal container and trying to assign identifier
	 * @param id unique identifier
	 * @param res resource unique pointer
	 *
	 * @return false if id or res is not unique (duplicate of asset or id collision)
	 */
	void add(Identifier id, std::unique_ptr<Resource> res);

	/**
	 * Loads assets from file (by calling appropriate function)
	 * @param id unique identifier
	 * @param filepath file path to resource
	 *
	 * @bug loadFromFile not working with sf::Music, use other manager instead
	 *
	 * @throw std::runtime_error if loading or inserting failed
	 */
	void loadFromFile(Identifier id, const std::string &filepath);

	/**
	 * Removes specified id from container
	 * @param id unique identifier
	 *
	 * @warning This method DOES DEALLOCATE memory occupied by asset!
	 * @throw runtime_error if id not found
	 */
	void remove(Identifier id);

	/**
	 * Gets reference to asset by specified id
	 * @param id unique identifier
	 *
	 * @return requested asset
	 * @throw std::runtime_error if id not found
	 */
	Resource& get(Identifier id);

	/**
	 * Gets constant reference to asset by specified id
	 * @param id unique identifier
	 * @return requested constant asset
	 *
	 * @throw std::runtime_error if id not found
	 */
	const Resource& get(Identifier id) const;
private:
	std::map<Identifier, std::unique_ptr<Resource>> m_resources;
};

template<typename Identifier, typename Resource>
void Assets<Identifier, Resource>::add(Identifier id,
		std::unique_ptr<Resource> res) {
	auto inserted = m_resources.insert(std::make_pair(id, std::move(res)));
	if (!inserted.second)
		throw std::runtime_error(
				"Assets::add - Failed to insert into container");
}

template<typename Identifier, typename Resource>
void Assets<Identifier, Resource>::loadFromFile(Identifier id,
		const std::string& filename) {
	std::unique_ptr<Resource> resource(new Resource());
	if (!resource->loadFromFile(filename))
		throw std::runtime_error(
				"Assets::loadFromFile - Failed to load " + filename);

	auto inserted = m_resources.insert(std::make_pair(id, std::move(resource)));
	if (!inserted.second)
		throw std::runtime_error(
				"Assets::loadFromFile - Failed to insert into container");
}

template<typename Identifier, typename Resource>
void Assets<Identifier, Resource>::remove(Identifier id) {
	auto var = m_resources.find(id);

	if (var == m_resources.end())
		throw std::runtime_error("Assets::remove - Id not found");

	m_resources.erase(var);
}

template<typename Identifier, typename Resource>
Resource& Assets<Identifier, Resource>::get(Identifier id) {
	auto found = m_resources.find(id);

	if (found == m_resources.end())
		throw std::runtime_error("Assets::get - Id not found");
	return *found->second;
}

template<typename Identifier, typename Resource>
const Resource& Assets<Identifier, Resource>::get(Identifier id) const {
	auto found = m_resources.find(id);

	if (found == m_resources.end())
		throw std::runtime_error("Assets::get - Id not found");
	return *found->second;
}

}
}

#endif /* SRC_CONTAINERS_ASSETS_HPP_ */
