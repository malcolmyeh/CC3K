#include "posn.h"

Posn Posn::getNew(std::string dir) {
	Posn p;
	if (dir == "ea") {
		p.x = this->x + 1;
		p.y = this->y;
	} else if (dir == "we") {
		p.x = this->x - 1;
		p.y = this->y;
	} else if (dir == "no") {
		p.x = this->x;
		p.y = this->y-1;
	} else if (dir == "so") {
		p.x = this->x;
		p.y = this->y+1;
	} else if (dir == "ne") {
		p.x = this->x + 1;
		p.y = this->y - 1;
	} else if (dir == "nw") {
		p.x = this->x - 1;
		p.y = this->y - 1;
	} else if (dir == "se") {
		p.x = this->x + 1;
		p.y = this->y + 1;
	} else if (dir == "sw") {
		p.x = this->x - 1;
		p.y = this->y + 1;
	}
	return p;
}

bool Posn::operator==(const Posn& p) {
	return this->x == p.x && this->y == p.y;
}

bool Posn::operator!=(const Posn& p) {
	return this->x != p.x || this->y != p.y;
}

Posn &Posn::operator=(const Posn& p){
	this->x = p.x;
	this->y = p.y;
	return *this;
}

