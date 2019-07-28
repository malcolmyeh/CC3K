#include "barriersuit.h"

// Constructor
barrierSuit::barrierSuit(Posn p, Dragon *dragon) {
    this->p = p;
    this->dragon = dragon;
    this->symbol = 'B';
}