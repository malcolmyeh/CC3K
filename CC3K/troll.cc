#include "troll.h"

Troll::Troll(Posn position, int chamberID) : Atk(25), Def(15), HP(120), gold(1), race("Troll"), symbol('T'), hasCompass(false), chamberID(chamberID), position(position) {}

Troll::~Troll(){}