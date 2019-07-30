#include "barriersuit.h"

// Constructor
barrierSuit::barrierSuit(Posn p) {
    this->p = p;
    this->symbol = 'B';
    this->guarded = true;
}

bool barrierSuit::isGuarded() {
	return this->guarded;
}

void barrierSuit::setGuarded(bool b) {
	this->guarded = b;
}