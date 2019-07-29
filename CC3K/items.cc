#include "item.h"

// Constructor

Item::Item() {}

Item::Item(Posn p) {
	this->p = p;
}

char Item::getSymbol() {
	return this->symbol;
}