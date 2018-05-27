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

#ifndef HANOIMODEL_H_
#define HANOIMODEL_H_

#include <vector>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

class HanoiModel: public sf::Drawable {
public:
	/// @brief Adds sprite to 'Hanoi sprite tower'
	void add(sf::Sprite &sprite);

	/// @brief Destroies hanoi sprite tower
	void clear();

	/// @brief Render whole sprite tower to specified target
	virtual void draw(sf::RenderTarget &target, sf::RenderStates states) const;

	/// @brief Render shadow of the tower to specified target
	virtual void drawShadow(sf::RenderTarget &target, sf::Vector2f scale) const;


	void setPosition(sf::Vector2f pos);
	void setPosition(float x, float y);
	void setRotation(float rotation);
	void setScale(sf::Vector2f scale);
	void setScale(float x, float y);
	void setShadowAngle(float angle);
	void setHeightStep(float step);
	void setShadowStep(float step);

	sf::Vector2f getPosition();
	sf::Vector2f getScale();
	float getShadowAngle();
	float getShadowStep();
	float getHeightStep();
	float getRotation();


	void move(sf::Vector2f pos);
	void move(float x, float y);
	void scale(sf::Vector2f scale);
	void scale(float x, float y);
	void rotate(float rotation);

	HanoiModel();
	virtual ~HanoiModel();
private:
	sf::Vector2f m_position;
	sf::Vector2f m_scale;

	float m_shadow_angle;
	float m_height_step;
	float m_shadow_step;

	float m_rotation;
	std::vector<sf::Sprite> m_layours;
};

#endif /* HANOIMODEL_H_ */
