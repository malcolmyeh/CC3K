#include "potion.h"

// Constructor
Potion::Potion(Posn p) {
    this->p = p;
}

// Accessor
string Potion::getPotion() {
    return this->type;
}