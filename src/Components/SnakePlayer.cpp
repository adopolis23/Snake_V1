#include "SnakePlayer.h"

Snake::SnakePlayer::SnakePlayer()
{
	this->addSection();
	this->curr_dir = Direction::RIGHT;
}

void Snake::SnakePlayer::Update() {
	this->Move(this->curr_dir);
}

void Snake::SnakePlayer::setDirection(Direction dir) {
	this->curr_dir = dir; 
}


void Snake::SnakePlayer::Move(Direction dir)
{
	switch (dir) {
	case Direction::UP:
		this->sections[0].Move(Direction::UP);
		break;
	case Direction::DOWN:
		this->sections[0].Move(Direction::DOWN);
		break;
	case Direction::LEFT:
		this->sections[0].Move(Direction::LEFT);
		break;
	case Direction::RIGHT:
		this->sections[0].Move(Direction::RIGHT);
		break;
	};
}


void Snake::SnakePlayer::Render(Window* window)
{
	for (auto section : this->sections) {
		section.Render(window, this->Snake_Red_Value, this->Snake_Green_Value, this->Snake_Blue_Value);
	}
}

void Snake::SnakePlayer::addSection()
{
	Snake::SnakeSection tmp(10, 10, 10, 10);
	this->sections.push_back(tmp);
}
