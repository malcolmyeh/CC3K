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

dragonHoard::dragonHoard(Posn p, Enemy *dragon) {
    this->p = p;
    this->dragon = dragon;
    this->symbol = 'G';
}

void dragonHoard::setDragon(Enemy *dragon) {
    this->dragon = dragon;
}

Enemy *dragonHoard::getDragon() {
    return this->dragon;
}

// Accessors
int Gold::getValue() {
    return this->value;
}

bool Gold::isGuarded() {
    return this->guarded;
}

// Mutators
void Gold::setGuarded(bool x) {
    this->guarded = x;
}

void Gold::setValue(int x) {
    this->value = x;
}

std::string Gold::getType() {
    return this->type;
}