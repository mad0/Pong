#pragma once
#include <SFML/Graphics.hpp>

class Paddle {
private:
	sf::RectangleShape paddle;

public:
	Paddle(int _x, int _y);
	~Paddle();
	void moveX();
	void moveY();
	sf::RectangleShape paddleDraw();
};

