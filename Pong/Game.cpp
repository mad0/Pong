#include "Game.h"

Game::Game() {
	window.create(sf::VideoMode(1024,768), "Okno");
	paddle1 = std::make_unique<Paddle>(10,344);
	paddle2 = std::make_unique<Paddle>(1014,344);
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
