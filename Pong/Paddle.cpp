#include "Paddle.h"


Paddle::Paddle(int _x, int _y) {
	paddle.setFillColor(sf::Color::Green);
	paddle.setPosition(_x, _y);
	paddle.setSize(sf::Vector2f(10, 80));
}


Paddle::~Paddle() {
}

void Paddle::moveX() {
	paddle.move(0,1);
}

void Paddle::moveY() {
	paddle.move(0,-1)
}

sf::RectangleShape Paddle::paddleDraw() {
	return paddle;
}
