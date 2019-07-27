#include "vampire.h"

Vampire::Vampire(Posn position, int chamberID){
	this->Atk = 25;
	this->Def = 25;
	this->HP = 50;
	this->gold = 1;
	this->race = "Vampire";
	this->symbol = 'V';
	this->hasCompass = false;
	this->chamberID = chamberID;
	this->position = position;
}

Vampire::~Vampire(){}