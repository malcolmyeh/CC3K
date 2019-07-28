#include "gold.h"

// Constructors
normalHoard::normalHoard(Posn p, std::string type) {
    this->p = p;
    this->type = type;
    this->symbol = 'G';
}

smallHoard::smallHoard(Posn p) {
    this->p = p;
    this->type = type;
    this->symbol = 'G';
}

dragonHoard::dragonHoard(Posn p, Dragon *dragon) {
    this->p = p;
    this->type = type;
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

bool Gold::isProtected() {
    return this->isProtected();
}

// Mutators
void Gold::setType(std::string type) {
    this->type = type;
}

void Gold::setProtection(bool x) {
    this->protected = x;
}

void Gold::setValue(int x) {
    this->value = x;
}