#include "gold.h"

int Gold::getValue() {
    return this->value;
}

string Gold::getType() {
    return this->type;
}

bool Gold::isProtected() {
    return this->isProtected();
}

void Gold::setType(string type) {
    this->type = type;
}

void Gold::setProtection(bool x) {
    this->protected = x;
}

void Gold::setValue(int x) {
    this->value = x;
}

// Constructors

Gold::Gold(Posn p) {
    this->p = p;
}

normalHoard::normalHoard(Posn p) {
    this->p = p;
}

smallHoard::smallHoard(Posn p) {
    this->p = p;
}

dragonHoard::dragonHoard(Posn p, Dragon *dragon) {
    this->p = p;
    this->dragon = dragon;
}