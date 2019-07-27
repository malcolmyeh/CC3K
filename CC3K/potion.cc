#include "potion.h"

// Constructor
Potion::Potion(Posn p, std::string type) {
    this->p = p;
    this->type = type;
    this->symbol = 'P';
}

// Accessor
string Potion::getPotion() {
    return this->type;
}