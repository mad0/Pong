#include "Ball.h"

Ball::Ball() 
{
	ball.setFillColor(sf::Color::White);
	ball.setRadius(6);
	ball.setPointCount(50);
	ball.setPosition(510, 382);
}


Ball::~Ball() 
{
}

sf::CircleShape Ball::drawBall() 
{
	return ball;
}

sf::Vector2f Ball::ballPosition()
{
	return ball.getPosition();
}

void Ball::updateBall() 
{
	ball.move(std::cos(0) * 5, std::sin(0) * 5);
}