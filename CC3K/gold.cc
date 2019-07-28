#include "gold.h"

// Constructors
normalHoard::normalHoard(Posn p) {
    this->p = p;
    this->symbol = 'G';
}

smallHoard::smallHoard(Posn p) {
    this->p = p;
    this->symbol = 'G';
}

dragonHoard::dragonHoard(Posn p, Dragon *dragon) {
    this->p = p;
    this->dragon = dragon;
    this->symbol = 'G';
}

// Accessors
int Gold::getValue() {
    return this->value;
}

std::string Gold::getType() {
    return this->type;
}

bool Gold::isGuarded() {
    return this->guarded;
}

// Mutators
void Gold::setType(std::string type) {
    this->type = type;
}

void Gold::setGuarded(bool x) {
    this->guarded = x;
}

void Gold::setValue(int x) {
    this->value = x;
}