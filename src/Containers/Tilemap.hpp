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
