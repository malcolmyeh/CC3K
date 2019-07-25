#include "Posn.h"

Posn getNew(std::string dir) {
		if (dir == "ea") {
			this->x = this->x + 1;
		} else if (dir == "we") {
			this->x = this->x - 1;
		} else if (dir == "no") {
			this->y = this->y - 1;
		} else if (dir == "so") {
			this->y = this->y + 1;
		} else if (dir == "ne") {
			this->x = this->x + 1;
			this->y = this->y - 1;
		} else if (dir == "nw") {
			this->x = this->x - 1;
			this->y = this->y - 1;
		} else if (dir == "se") {
			this->x = this->x + 1;
			this->y = this->y + 1;
		} else if (dir == "sw") {
			this->x = this->x - 1;
			this->y = this->y + 1;
		}
}

bool Posn::operator==(const Posn& p) {
	return this->x == p.x && this->y == this->y;
}