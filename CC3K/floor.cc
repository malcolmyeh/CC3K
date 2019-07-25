#include "floor.h"

Floor(int level, bool won, bool hostile, bool spawned, Player * player) {
	this->level = level;
	this->won = won;
	this->visible = false;
	this->hostile = hostile;
	this->spawned = spawned;
	this->player = player;
	this->stair = null;
}

Floor() {
	this->level = 0;
	this->won = false;
	this->visible = false;
	this->hostile = false;
	this->spawned = false;
	this->player = null;
	this->stair = null;
}

~Floor() {
	/*for (enemy : *this->enemies) {
		delete enemy;
	}
	for (item : *this->items) {
		delete item;
	}*/
	for (chamber : *this->chambers) {
		delete chamber;
	}
}

//void generateEnemies() {}

/*void generateItems() {

}

void generateChamber() {

}*/

bool validTile(Posn pos) {
	return displayGrid[pos.y - 1][pos.x - 1] == ".";
}

void setVisible(bool visible) {

}

void setLevel(int level) {

}

void setWon(bool won) {

}

void setHostile(bool hostile) {

}

void setSpawned(bool spawned) {

}

bool getVisible() {
	return true;
}

int getLevel() {
	return 1;
}

bool getWon() {
	return true;
}

bool getHostile() {
	return true;
}

bool getSpawned() {
	return true;
}