#include "Ball.h"

Ball::Ball() {
	ball.setFillColor(sf::Color::White);
	ball.setRadius(6);
	ball.setPointCount(50);
	ball.setPosition(510, 382);
}


Ball::~Ball() {
}

sf::CircleShape Ball::drawBall() {
	return ball;
}

void Ball::updateBall() {

	ball.setPosition(ball.getPosition().x+1, ball.getPosition().y+1);
}

