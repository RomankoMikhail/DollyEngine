#include "Tilemap.hpp"
#include <cassert>

namespace Dolly {
namespace Containers {

void Tilemap::draw(sf::RenderTarget& target, sf::RenderStates states) const {
	states.transform *= getTransform();
	states.texture = m_texture;
	target.draw(m_vertices, states);
}

void Tilemap::setTexture(sf::Texture *texture) {
	m_texture = texture;
	rebuild();
}

void Tilemap::setTileSize(const sf::Vector2u &size) {
	m_tilesize = size;
	rebuild();
}

void Tilemap::setTileSize(const unsigned &x, const unsigned &y) {
	setTileSize(sf::Vector2u(x, y));
}

void Tilemap::set(const sf::Vector2u &pos, const int &value) {
	m_data[pos.y][pos.x] = value;
}

void Tilemap::set(const unsigned &x, const unsigned &y, const int &value) {
	return set(sf::Vector2u(x, y), value);
}

int Tilemap::get(const sf::Vector2u &pos) const {
	return m_data[pos.y][pos.x];
}

int Tilemap::get(const unsigned &x, const unsigned &y) const {
	return get(sf::Vector2u(x, y));
}

void Tilemap::resize(const sf::Vector2u &size) {
	m_data.resize(size.y);
	for (auto &sub : m_data) {
		sub.resize(size.x);
	}
	rebuild();
	m_size = size;
}

void Tilemap::resize(const unsigned &x, const unsigned &y) {
	resize(sf::Vector2u(x, y));
}

void Tilemap::rebuild() {
	if(m_texture == NULL || m_tilesize.x == 0)
		return;

	unsigned vsize = m_size.x * m_size.y * 4;

	m_vertices.clear();
	m_vertices.setPrimitiveType(sf::Quads);
	m_vertices.resize(vsize);



	for (unsigned int i = 0; i < m_size.x; ++i)
		for (unsigned int j = 0; j < m_size.y; ++j) {
			int tileNumber = m_data[j][i];
			if (tileNumber == 0)
				continue;

			assert((m_texture->getSize().x / m_tilesize.x) != 0);

			int tu = tileNumber % (m_texture->getSize().x / m_tilesize.x);
			int tv = tileNumber / (m_texture->getSize().x / m_tilesize.x);

			unsigned index = (i + j * m_size.x) * 4;
			assert(index + 3 < vsize);

			sf::Vertex* quad = &m_vertices[(i + j * m_size.x) * 4];

			quad[0].position = sf::Vector2f(float(i * m_tilesize.x), float(j * m_tilesize.y));
			quad[1].position = sf::Vector2f(float((i + 1) * m_tilesize.x), float(j * m_tilesize.y));
			quad[2].position = sf::Vector2f(float((i + 1) * m_tilesize.x), float((j + 1) * m_tilesize.y));
			quad[3].position = sf::Vector2f(float(i * m_tilesize.x), float((j + 1) * m_tilesize.y));

			quad[0].texCoords = sf::Vector2f(float(tu * m_tilesize.x), float(tv * m_tilesize.y));
			quad[1].texCoords = sf::Vector2f(float((tu + 1) * m_tilesize.x), float(tv * m_tilesize.y));
			quad[2].texCoords = sf::Vector2f(float((tu + 1) * m_tilesize.x), float((tv + 1) * m_tilesize.y));
			quad[3].texCoords = sf::Vector2f(float(tu * m_tilesize.x), float((tv + 1) * m_tilesize.y));
		}
}

Tilemap::Tilemap() {
	m_texture = NULL;
}

}
}
