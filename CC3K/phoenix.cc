#include "phoenix.h"

Phoenix::Phoenix(Posn position, bool hasCompass, int chamberID) : Atk(35), Def(20), HP(50), gold(1), race("Phoenix"), symbol('X'), position(position), hasCompass(hasCompass), chamberID(chamberID) {}

Phoenix::~Phoenix(){}