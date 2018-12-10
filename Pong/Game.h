#pragma once
#include <SFML/Graphics.hpp>
#include "Paddle.h"
#include "Ball.h"

class Game {
private: 
	sf::RenderWindow window;
	std::unique_ptr<Paddle> paddle1;
	std::unique_ptr<Paddle> paddle2;
	std::unique_ptr<Ball> ball;

public:
	Game();
	~Game();
	void mainLoop();
	void input();
	void update();
	void draw();
	void FPS();
};

