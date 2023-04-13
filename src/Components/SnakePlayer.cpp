#include "SnakePlayer.h"

Snake::SnakePlayer::SnakePlayer()
{
	this->addSection();
}

void Snake::SnakePlayer::Update() {
	
}


void Snake::SnakePlayer::Render(Window* window)
{
	for (auto section : this->sections) {
		section.Render(window);
	}
}

void Snake::SnakePlayer::addSection()
{
	Snake::SnakeSection tmp(10, 10, 10, 10);
	this->sections.push_back(tmp);
}
