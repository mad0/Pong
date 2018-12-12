#pragma once
#include <SFML/Graphics.hpp>

class Ball {
private:
	sf::CircleShape ball;
	sf::Vector2f position;
	float dirX;
	float dirY;
public:
	Ball(float x, float y);
	~Ball();
	sf::CircleShape drawBall();
	sf::FloatRect getPosition();
	void updateBall();
	void leftRight();
	void upDown();
};

