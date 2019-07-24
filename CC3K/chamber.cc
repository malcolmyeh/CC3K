#include "chamber.h"

Chamber::Chamber(int num) {
	if (num == 1) {
		this->num = num;
		this->row = 4;
		this->col = 4;
		this->maxRow = 7;
		this->maxCol = 29;
	} else if (num == 2) {
		this->num = num;
		this->row = 5;
		this->col = 16;
		this->maxRow = 22;
		this->maxCol = 25;
	} else if (num == 3) {
		this->num = num;
		this->row = 4;
		this->col = 40;
		this->maxRow = 13;
		this->maxCol = 76;
	} else if (num == 4) {
		this->num = num;
		this->row = 11;
		this->col = 39;
		this->maxRow = 13;
		this->maxCol = 50;
	} else if (num == 5) {
		this->num = num;
		this->row = 17;
		this->col = 38;
		this->maxRow = 22;
		this->maxCol = 76;
	}
}

bool checkRange(int x, int y) {
	if (num == 1 || num == 2 || num == 4) {
		
	} else if (num == 3) {

	} else if (num == 5) {
		
	}
}

