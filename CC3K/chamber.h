#ifndef CHAMBER_H
#define CHAMBER_H

class Chamber {

	int num;
	int maxRow;
	int maxCol;
	int row;
	int col;

public:
	Chamber(int num);
	bool checkRange(Posn p);
};

#endif