#ifndef GAME_H
#define GAME_H

#include "posn.h"
#include "floor.h"
#include "character.h"
#include "player.h"
#include "human.h"
#include "display.h"

class Controller {
private:
	Floor floor;	
	Display display;

public:
	void gameInit();


};

bool validDirection(std::string s);


#endif