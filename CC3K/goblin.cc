#include "goblin.h"

Goblin::Goblin(Posn position, int chamberID) : Atk(5), Def(10), HP(70), gold(1), race("Goblin"), symbol('N'), hasCompass(false), chamberID(chamberID), position(position) {}

Goblin::~Goblin(){}