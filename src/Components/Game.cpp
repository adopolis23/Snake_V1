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

}


//Contains the main game loop
void Snake::Game::Start() {
	
	isRunning = true;

	

	while (isRunning) {
		
		this->HandleInput();
		this->Update();
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
		break;
	};

}

void Snake::Game::Update() {

}

void Snake::Game::Render() {
	//clears the screen - sets the main buffer to all zero
	m_Window->clear();


	//render objects here - ex: snake.render(m_window);



	//copies the buffer contents to the window renderer - pushes changes maid by render functions to the screen
	m_Window->update();
}






Snake::Game::~Game()
{
	delete m_Window;
}