#ifndef STAIR_H
#define STAIR_H

#include "posn.h"

class Stair {

	char symbol;
	Posn position;

public:
	Stair(Posn p);
	char getSymbol();
	Posn getPosition();	
};

#endif

