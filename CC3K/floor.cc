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
	char t = this->displayGrid[pos.y - 1][pos.x - 1];
	return t == '.' || t == '+' || t == '#';
}

void Floor::setVisible(bool visible) {
	this->stairVisible = visible;
}

void Floor::setLevel(int level) {
	this->level = level;
}

void Floor::setWon(bool won) {
	this->won = won;
}

void Floor::setHostile(bool hostile) {
	this->merchantHostile = hostile;
}

void Floor::setSpawned(bool spawned) {
	this->barrierSpawned = spawned;
}

bool Floor::getVisible() {
	return this->stairVisible;
}

int Floor::getLevel() {
	return this->level;
}

bool Floor::getWon() {
	return this->won;
}

bool Floor::getHostile() {
	return this->merchantHostile;
}

bool Floor::getSpawned() {
	return this->barrierSpawned;
}