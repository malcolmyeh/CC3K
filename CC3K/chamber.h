#ifndef CHAMBER_H
#define CHAMBER_H

#include "posn.h"

class Chamber {

	int num;
	int maxRow;
	int maxCol;
	int row;
	int col;

public:
	Chamber(int num);
	bool checkRange(Posn p);
	Posn getPosition() {

	}
};

#endif