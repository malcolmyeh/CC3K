#include "floor.h"

Floor::Floor(int level, bool won, bool hostile, bool spawned, Player * player) {
	this->level = level;
	this->won = won;
	this->stairVisible = false;
	this->merchantHostile = hostile;
	this->barrierSpawned = spawned;
	this->player = player;
	this->stair = NULL;
}

Floor::Floor() {
	this->level = 0;
	this->won = false;
	this->stairVisible = false;
	this->merchantHostile = false;
	this->barrierSpawned = false;
	this->player = NULL;
	this->stair = NULL;
}

Floor::~Floor() {
	/*for (enemy : *this->enemies) {
		delete enemy;
	}
	for (item : *this->items) {
		delete item;
	}
	for (chamber : *this->chambers) {
		delete chamber;
	}*/
}

//void generateEnemies() {}

/*void generateItems() {

}

void generateChamber() {

}*/

bool Floor::validTile(Posn pos) {
	return this->displayGrid[pos.y - 1][pos.x - 1] == '.';
}

void Floor::setVisible(bool visible) {

}

void Floor::setLevel(int level) {

}

void Floor::setWon(bool won) {

}

void Floor::setHostile(bool hostile) {

}

void Floor::setSpawned(bool spawned) {

}

bool Floor::getVisible() {
	return true;
}

int Floor::getLevel() {
	return 1;
}

bool Floor::getWon() {
	return true;
}

bool Floor::getHostile() {
	return true;
}

bool Floor::getSpawned() {
	return true;
}