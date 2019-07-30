#include "gold.h"

// Constructors
normalHoard::normalHoard(Posn p) {
    this->p = p;
    this->symbol = 'G';
    this->type = "normalHoard";
    this->value = 2;
}

smallHoard::smallHoard(Posn p) {
    this->p = p;
    this->symbol = 'G';
    this->type = "smallHoard";
    this->value = 1;
}

/*dragonHoard::dragonHoard(Posn p, Enemy *dragon) {
    this->p = p;
    this->dragon = dragon;
    this->type = "dragonHoard";
    this->symbol = 'G';
}*/


dragonHoard::dragonHoard(Posn p) {
    this->p = p;
    this->type = "dragonHoard";
    this->symbol = 'G';
    this->value = 6;
}

/*void dragonHoard::setDragon(Enemy *dragon) {
    this->dragon = dragon;
}

Enemy *dragonHoard::getDragon() {
    return this->dragon;
}*/

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