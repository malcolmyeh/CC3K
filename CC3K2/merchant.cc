#include "merchant.h"

Merchant::Merchant(Posn position, int chamberID)
{
    this->Atk = 70;
    this->Def = 5;
    this->HP = 30;
    this->gold = 4;
    this->race = "Merchant";
    this->symbol = 'M';
    this->hasCompass = false;
    this->chamberID = chamberID;
    this->position = position;
    this->stunned = false;
}

Merchant::~Merchant() {}

