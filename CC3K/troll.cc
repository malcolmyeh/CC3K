#include "troll.h"

Troll::Troll(Posn position, bool hasCompass, int chamberIDn) : Atk(25), Def(15), HP(120), gold(1), race("Troll"), symbol('T'), hasCompass(hasCompass), chamberID(chamberID) {}

Troll::~Troll(){}