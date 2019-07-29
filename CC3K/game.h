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
<<<<<<< HEAD
	Controller() {}
	std:string runGame(char type);
=======
	std::string runGame(char type);
>>>>>>> 2e7f90a0e11fbee74afd234e9aaf8e8e2650d38b
	void gameInit();
	void 

};

bool validDirection(std::string s);


#endif