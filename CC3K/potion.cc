#include "potion.h"

// Constructor
Potion::Potion(Posn p, std::string type) {
    this->p = p;
    this->type = type;
    this->symbol = 'P';
}

// Accessor
std::string Potion::getType(){
    return this->type;
}