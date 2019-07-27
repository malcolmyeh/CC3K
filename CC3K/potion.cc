#include "potion.h"

Potion::Potion(string type) {
    this->type = type;
}

string Potion::getPotion() {
    return this->type;
}

Potion::Potion(Posn p) {
    this->p = p;
}