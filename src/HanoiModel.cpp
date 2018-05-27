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

#include "HanoiModel.h"
#include <cmath>

void HanoiModel::add(sf::Sprite &sprite) {
	m_layours.push_back(sprite);
	float w = sprite.getGlobalBounds().width;
	float h = sprite.getGlobalBounds().height;
	m_layours.back().setOrigin(w / 2, h / 2);
}

void HanoiModel::clear() {
	m_layours.clear();
}

void HanoiModel::draw(sf::RenderTarget& target, sf::RenderStates states) const {
	sf::Vector2f position = m_position;
	for (sf::Sprite sprite : m_layours) {
		sprite.setRotation(m_rotation);
		sprite.setPosition(position);
		sprite.scale(m_scale);
		sprite.setColor(sf::Color::White);
		target.draw(sprite, states);

		position.y -= m_height_step;
	}
}

void HanoiModel::drawShadow(sf::RenderTarget &target,
		sf::Vector2f scale) const {
	sf::Vector2f shadow = m_position;

	shadow.x *= scale.x;
	shadow.y *= scale.y;

	for (sf::Sprite sprite : m_layours) {
		sprite.setColor(sf::Color(0, 0, 0, 255));
		sprite.setScale(scale);
		sprite.scale(m_scale);
		sprite.setRotation(m_rotation);
		sprite.setPosition(shadow);
		target.draw(sprite);

		shadow.y += sin(M_PI / 180 * m_shadow_angle) * m_shadow_step;
		shadow.x += cos(M_PI / 180 * m_shadow_angle) * m_shadow_step;
	}
}

void HanoiModel::setPosition(sf::Vector2f pos) {
	m_position = pos;
}

void HanoiModel::setPosition(float x, float y) {
	m_position.x = x;
	m_position.y = y;
}

void HanoiModel::setRotation(float rotation) {
	m_rotation = rotation;
}

void HanoiModel::setScale(sf::Vector2f scale) {
	m_scale = scale;
}

void HanoiModel::setScale(float x, float y) {
	m_scale.x = x;
	m_scale.y = y;
}

void HanoiModel::setShadowAngle(float angle) {
	m_shadow_angle = angle;
}

void HanoiModel::setHeightStep(float step) {
	m_height_step = step;
}

void HanoiModel::setShadowStep(float step) {
	m_shadow_step = step;
}

sf::Vector2f HanoiModel::getPosition() {
	return m_position;
}

sf::Vector2f HanoiModel::getScale() {
	return m_scale;
}

float HanoiModel::getShadowAngle() {
	return m_shadow_angle;
}

float HanoiModel::getShadowStep() {
	return m_shadow_step;
}

float HanoiModel::getHeightStep() {
	return m_height_step;
}

float HanoiModel::getRotation() {
	return m_rotation;
}

void HanoiModel::move(sf::Vector2f pos) {
	m_position += pos;
}

void HanoiModel::move(float x, float y) {
	m_position.x += x;
	m_position.y += y;
}

void HanoiModel::scale(sf::Vector2f scale) {
	m_scale.x *= scale.x;
	m_scale.y *= scale.y;
}

void HanoiModel::scale(float x, float y) {
	m_scale.x *= x;
	m_scale.y *= y;
}

void HanoiModel::rotate(float rotation) {
	m_rotation += rotation;
}

HanoiModel::HanoiModel() {
	m_rotation = 0.0f;
	m_scale = sf::Vector2f(1, 1);
	m_shadow_angle = 45;
	m_shadow_step = 2;
	m_height_step = 2;
	// TODO Auto-generated constructor stub

}

HanoiModel::~HanoiModel() {
	// TODO Auto-generated destructor stub
}

