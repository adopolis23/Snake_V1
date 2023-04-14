#pragma once

#include "Game.h"

//constructor - Creates the game window
Snake::Game::Game()
	:m_Width(700), m_Height(450), isRunning(false)
{
	m_Window = new Window(m_Width, m_Height);
	if (m_Window == nullptr) {
		LOG("Error creating the window.");
	}
	LOG("Game Window Instance Created");

	//game object init
	this->Score = 0;
	this->apple.setRandomPosition(m_Width, m_Height);
}


//Contains the main game loop
void Snake::Game::Start() {
	
	isRunning = true;

	LOG("Starting Game...");
	while (isRunning) {

		this->HandleInput();

		if (SDL_GetTicks() / 10 % 5 == 0) {
			this->Update();
		}
		
		this->Render();
	

	}

}



void Snake::Game::HandleInput() {

	//switch calls the handleEvends of the window which returns the event key
	switch (m_Window->handleEvents()) {

	case Window::Action::QUIT:
		LOG("QUITTING GAME");
		this->isRunning = false; 
		break;

	case Window::Action::LEFT:
		this->player.setDirection(Direction::LEFT);
		break;

	case Window::Action::RIGHT:
		this->player.setDirection(Direction::RIGHT);
		break;

	case Window::Action::DOWN:
		this->player.setDirection(Direction::DOWN);
		break;

	case Window::Action::UP:
		this->player.setDirection(Direction::UP);
		break;
	};

}

void Snake::Game::Update() {

	//UPDATES to happen every 100 ticks

	
	this->player.Update();

	if (this->player.Collides(apple)) {
		this->apple.setRandomPosition(m_Width, m_Height);
		this->Score++;

		//add 3 sections
		for (int i = 0; i < 3; i++) {
			this->player.addSection();
		}

		LOG("SCORE: " << this->Score);
	}

}

void Snake::Game::Render() {
	//clears the screen - sets the main buffer to all zero
	m_Window->clear();


	//render objects here - ex: snake.render(m_window);
	this->player.Render(m_Window);
	this->apple.Render(m_Window);

	//copies the buffer contents to the window renderer - pushes changes maid by render functions to the screen
	m_Window->update();
}






Snake::Game::~Game()
{
	delete m_Window;
}
