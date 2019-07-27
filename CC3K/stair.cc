#include "stair.h"

Stair::Stair(Posn p) {
	this->position = p;
	this->symbol = '/';
}

char Stair::getSymbol() {
	return this->symbol;
}

Posn Stair::getPosition() {
	return this->position;
}