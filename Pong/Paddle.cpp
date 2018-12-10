#include "Paddle.h"


Paddle::Paddle(int _x, int _y) {
	paddle.setFillColor(sf::Color::Green);
	paddle.setPosition(_x, _y);
	paddle.setSize(sf::Vector2f(10, 80));
}


Paddle::~Paddle() {
}

void Paddle::moveUP() {
	if (paddle.getPosition().y>0)
		paddle.move(0, -10);
}

void Paddle::moveDOWN() {
	if (paddle.getPosition().y<768-80)
		paddle.move(0, 10);
}

sf::RectangleShape Paddle::paddleDraw() {
	return paddle;
}

sf::FloatRect Paddle::paddPosition(){
	return paddle.getGlobalBounds();
}
