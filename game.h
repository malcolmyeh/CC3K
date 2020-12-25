#ifndef GAME_H
#define GAME_H

#include "posn.h"
#include "floor.h"
#include "character.h"
#include "player.h"
#include "human.h"
#include "display.h"
#include <iostream>

class Controller {
private:
	Floor *floor;	
	Display *display;

public:
	Controller() {}
	~Controller();
	std::string runGame(char type);
	void gameInit(char type);
	void newFloor();
	double getScore();

};

bool validDirection(std::string s);


#endif

