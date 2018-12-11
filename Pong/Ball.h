#pragma once
#include <SFML/Graphics.hpp>

class Ball {
private:
	sf::CircleShape ball;
public:
	Ball();
	~Ball();
	sf::CircleShape drawBall();
	sf::Vector2f ballPosition();
	sf::RectangleShape 
	void updateBall();
};

