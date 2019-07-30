#include "barriersuit.h"

// Constructor
/* barrierSuit::barrierSuit(Posn p, Enemy *dragon) {
    this->p = p;
    this->dragon = dragon;
    this->symbol = 'B';
}*/

barrierSuit::barrierSuit(Posn p) {
    this->p = p;
    this->symbol = 'B';
}

bool barrierSuit::isGuarded() {
	return this->guarded;
}

void barrierSuit::setGuarded(bool b) {
	this->guarded = b;
}

/*void barrierSuit::setDragon(Enemy *dragon) {
	this->dragon = dragon;
}
        
Enemy *barrierSuit::getDragon() {
	return this->dragon;
}*/