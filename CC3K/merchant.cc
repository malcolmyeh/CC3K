#include "merchant.h"

Merchant::Merchant(Posn position, bool hasCompass, int chamberID) : Atk(70), Def(5), HP(30), gold(4), race("Merchant"), symbol('M'), hasCompass(hasCompass), chamberID(chamberID) {}

Merchant::~Merchant(){}