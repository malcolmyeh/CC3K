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
	bool checkRange(int x, int y);
	~Chamber();
};

#endif