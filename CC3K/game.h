#ifndef GAME_H
#define GAME_H

#include <iostream>
#include "posn.h"
#include "floor.h"
#include "character.h"
#include "player.h"
#include "human.h"
#include <string>
#include <cstdlib>


// Output the floor on the screen
void printFloor(Floor *floor);

//Check if valid direction
bool validDirection(std::string s);

//



#endif