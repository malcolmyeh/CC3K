#include "vampire.h"

Vampire::Vampire(Posn position, bool hasCompass, int chamberID) : Atk(25), Def(25), HP(50), gold(1), race("Vampire"), symbol('V'), hasCompass(hasCompass), chamberID(chamberID) {}

Vampire::~Vampire(){}