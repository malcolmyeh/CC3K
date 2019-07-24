#ifndef CHAMBER_H
#define CHAMBER_H

class Chamber {

protected:
	int num;
	int maxRow;
	int maxCol;
	int rows;
	int cols;

public:
	Chamber(int num);
	bool checkRange();
	~Chamber();
}

#endif