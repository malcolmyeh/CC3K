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

bool checkRange(Posn p) {
	int x = p.x;
	int y = p.y;
	if (num == 1 || num == 2 || num == 4) {
		return (x >= col && x <= maxCol && y >= row && y <= maxRow);
	} else if (num == 3) {
		if (x >= col && y >= row && x <= 61 && y <= 7) {
			return true;
		} else if (x = 62 && y >= 4 && y <= 13) {
			return true;
		} else if (x >= 63 && y >= 6 && x <= 70 && y <= 13) {
			return true;
		} else if (x >= 71 && y >= 7 && x <= 73 && y <= 13) {
			return true;
		} else if (x >= 74 && y >= 8 && x <= 76 && y <= 13) {
			return true;
		}
	} else if (num == 5) {
		if (x >= 38 && y >= 20 && x <= 65 && y <= 22) {
			return true;
		} else if (x >= 66 && y >= 17 && x <= 76 && y <= 22) {
			return true;
		}
	}
	return false;
}

