#include "werewolf.h"

Werewolf::Werewolf(Posn position, bool hasCompass, int chamberID) : Atk(30), Def(5), HP(120), gold(1), race("Werewolf"), symbol('W'), hasCompass(false), chamberID(chamberID), position(position) {}

Werewolf::~Werewolf(){}