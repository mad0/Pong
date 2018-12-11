#include "Game.h"
#include <iostream>

Game::Game() {
	window.create(sf::VideoMode(1024, 768), "Okno");
	window.setFramerateLimit(60);
	window.setVerticalSyncEnabled(true);
	paddle1 = std::make_unique<Paddle>(10, 344);
	paddle2 = std::make_unique<Paddle>(1004, 344);
	ball = std::make_unique<Ball>();
}
Game::~Game() {
}

void Game::mainLoop() {
	while (window.isOpen()) {
		this->input();
		this->update();
		this->draw();
	}
}

void Game::input() {
	sf::Event event;
	while (window.pollEvent(event)) {
		if (event.type == sf::Event::Closed)
			window.close();
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) 
		paddle2->moveUP();

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
		paddle2->moveDOWN();

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
		paddle1->moveUP();

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
		paddle1->moveDOWN();
}

void Game::update() {
}

void Game::draw() {
	window.clear();
	window.draw(paddle1->paddleDraw());
	window.draw(paddle2->paddleDraw());
	window.draw(ball->drawBall());
	window.display();
}

void Game::FPS()
{
}
