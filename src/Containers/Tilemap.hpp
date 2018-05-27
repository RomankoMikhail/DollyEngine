#ifndef SRC_CONTAINERS_TILEMAP_HPP_
#define SRC_CONTAINERS_TILEMAP_HPP_

#include <SFML/Graphics.hpp>

namespace Dolly
{
namespace Containers
{

class Tilemap : public sf::Transformable, public sf::Drawable
{
public:
	virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;

	void setTexture(sf::Texture *texture);
	void setTileSize(const sf::Vector2u &size);
	void setTileSize(const unsigned &x, const unsigned &y);

	void set(const sf::Vector2u &pos, const int &value);
	void set(const unsigned &x, const unsigned &y, const int &value);

	int get(const sf::Vector2u &pos) const;
	int get(const unsigned &x, const unsigned &y) const;

	void resize(const sf::Vector2u &size);
	void resize(const unsigned &x, const unsigned &y);

	void rebuild();

	Tilemap();
private:
	sf::Texture *m_texture;
	sf::VertexArray m_vertices;
	sf::Vector2u m_tilesize;
	sf::Vector2u m_size;
	std::vector<std::vector<int>> m_data;
};

}
}


#endif /* SRC_CONTAINERS_TILEMAP_HPP_ */
