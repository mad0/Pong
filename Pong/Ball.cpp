#include "Ball.h"

Ball::Ball(float _x, float _y)
{
	dirX = 5;
	dirY = 5;
	position.x = _x;
	position.y =  _y;
	ball.setFillColor(sf::Color::White);
	ball.setRadius(6);
	ball.setPointCount(50);
	ball.setPosition(_x, _y);
}


Ball::~Ball() 
{
}

sf::CircleShape Ball::drawBall() 
{
	return ball;
}

sf::FloatRect Ball::getPosition()
{
	return ball.getGlobalBounds();
}

void Ball::updateBall() 
{
	//ball.move(std::cos(0) * 5, std::sin(0) * 5)
	position.x += dirX;
	position.y += dirY;
	ball.setPosition(position);
}

void Ball::leftRight()
{
	dirX = -dirX;
}

void Ball::upDown()
{
	dirY = -dirY;
}
