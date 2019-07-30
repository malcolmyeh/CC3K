#include "gold.h"

// Constructors
normalHoard::normalHoard(Posn p) {
    this->p = p;
    this->symbol = 'G';
    this->type = "normalHoard";
    this->value = 2;
    this->guarded = "false";
}

smallHoard::smallHoard(Posn p) {
    this->p = p;
    this->symbol = 'G';
    this->type = "smallHoard";
    this->value = 1;
    this->guarded = "false";
}

dragonHoard::dragonHoard(Posn p) {
    this->p = p;
    this->type = "dragonHoard";
    this->symbol = 'G';
    this->value = 6;
    this->guarded = "true";
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