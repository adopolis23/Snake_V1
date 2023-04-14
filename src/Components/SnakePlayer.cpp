#include "SnakePlayer.h"

Snake::SnakePlayer::SnakePlayer()
{
	this->addSection();
	this->curr_dir = Direction::RIGHT;
	this->lives = 3;
}

void Snake::SnakePlayer::Update() {
	this->Move(this->curr_dir);



	//check if snake went out of bounds
	int bottom_rightX = this->sections[0].getX() + this->sections[0].getWidth();
	int bottom_rightY = this->sections[0].getX() + this->sections[0].getWidth();

}

void Snake::SnakePlayer::setDirection(Direction dir) {
	this->curr_dir = dir; 
}





void Snake::SnakePlayer::Move(Direction dir)
{

	for (int i = (this->sections.size() - 1); i > 0; i--) {
		this->sections[i].setX(this->sections[i - 1].getX());
		this->sections[i].setY(this->sections[i - 1].getY());
	}
	
	this->sections[0].Move(this->curr_dir);
}




void Snake::SnakePlayer::Render(Window* window)
{
	for (auto section : this->sections) {
		section.Render(window, this->Snake_Red_Value, this->Snake_Green_Value, this->Snake_Blue_Value);
	}
}


Snake::SnakeSection::Direction Snake::SnakePlayer::getDirection() {
	return this->curr_dir;
}

Snake::SnakeSection::Direction Snake::SnakePlayer::getOppositeDirection() {
	switch (this->curr_dir) {
	case Direction::UP:
		return Direction::DOWN;
		break;
	case Direction::DOWN:
		return Direction::UP;
		break;
	case Direction::LEFT:
		return Direction::RIGHT;
		break;
	case Direction::RIGHT:
		return Direction::LEFT;
		break;
	};
}



void Snake::SnakePlayer::addSection()
{
	//if vector is empty then add first section
	if (this->sections.size() == 0) {
		Snake::SnakeSection tmp(100, 100, D_SIZE, D_SIZE);
		this->sections.push_back(tmp);
	}
	else {
		Snake::SnakeSection tmp((-1 * D_SIZE), (-1 * D_SIZE), D_SIZE, D_SIZE);
		this->sections.push_back(tmp);
	}

	
}


//refactor (unintended copy being made #TODO)
bool Snake::SnakePlayer::Collides(GameObject& other) {
	
	if (this->sections[0].collidesWith(other)) {
		return true;
	}

	return false;

}
