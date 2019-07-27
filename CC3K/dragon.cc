#include "dragon.h"

Dragon::Dragon(posn position, DragonHoard * dragonHoard, BarrierSuit * barrierSuit, bool hasCompass, int chamberID) :
Atk(20), Def(20), HP(150), gold(0), race("Dragon"), symbol('D'), isHostile(false), 
DragonHoard(dragonHoard), BarrierSuit(barrierSuit), hasCompass(hasCompass), chamberID(chamberID){}

Dragon::~Dragon(){}


