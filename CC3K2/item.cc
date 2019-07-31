#include "item.h"

char Item::getSymbol() {
	return this->symbol;
}

Posn Item::getPosition() {
	return this->p;
}

bool Item::withinRange(Posn player){
	Posn epos = this->getPosition();
	std::string directions[8] = {"ea", "we", "no", "so", "ne", "nw", "se", "sw"};
	for (int i = 0; i < 8; ++i){
		if (epos.getNew(directions[i]) == player){
			return true;
		}
	}
	return false;
}



