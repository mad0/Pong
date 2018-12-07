#include "Ball.h"

Ball::Ball() {
	ball.setFillColor(sf::Color::White);
	ball.setRadius(5);
	ball.setPointCount(30);
	ball.setPosition(510, 382);
}


Ball::~Ball() {
}

sf::CircleShape Ball::drawBall() {
	return ball;
}
