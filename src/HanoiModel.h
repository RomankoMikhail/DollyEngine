/*
 * HanoiModel.h
 *
 *  Created on: 20 may 2018 г.
 *      Author: Romanko Mikhail
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
