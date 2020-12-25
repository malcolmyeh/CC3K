#include "chamber.h"
#include <iostream>

Chamber::Chamber(int num) {
	if (num == 1) {
		this->num = num;
		this->row = 3;
		this->col = 3;
		this->maxRow = 6;
		this->maxCol = 28;
	} else if (num == 2) {
		this->num = num;
		this->row = 15;
		this->col = 4;
		this->maxRow = 21;
		this->maxCol = 24;
	} else if (num == 3) {
		this->num = num;
		this->row = 3;
		this->col = 39;
		this->maxRow = 12;
		this->maxCol = 75;
	} else if (num == 4) {
		this->num = num;
		this->row = 10;
		this->col = 38;
		this->maxRow = 12;
		this->maxCol = 49;
	} else if (num == 5) {
		this->num = num;
		this->row = 16;
		this->col = 37;
		this->maxRow = 21;
		this->maxCol = 75;
	}
}

bool Chamber::checkRange(Posn p) {
	int x = p.x;
	int y = p.y;
	if (num == 1 || num == 2 || num == 4) {
		return (x >= col && x <= maxCol && y >= row && y <= maxRow);
	} else if (num == 3) {
		if (x >= col && y >= row && x <= 60 && y <= 6) {
			return true;
		} else if (x == 61 && y >= 3 && y <= 12) {
			return true;
		} else if (x >= 62 && y >= 5 && x <= 69 && y <= 12) {
			return true;
		} else if (x >= 70 && y >= 6 && x <= 72 && y <= 12) {
			return true;
		} else if (x >= 73 && y >= 7 && x <= 75 && y <= 12) {
			return true;
		}
	} else if (num == 5) {
		if (x >= 37 && y >= 19 && x <= 64 && y <= 21) {
			return true;
		} else if (x >= 65 && y >= 16 && x <= 75 && y <= 21) {
			return true;
		}
	}
	return false;
}

Posn Chamber::getPosition() {
	Posn p;
	do {

		int r = rand() % maxRow;
		int c = rand() % maxCol;
		p.x = c;
		p.y = r;
	} while (!checkRange(p));

	return p;
}

