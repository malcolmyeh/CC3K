#include "goblin.h"

Goblin::Goblin(Posn position, int chamberID) {
	this->Atk = 5;
	this->Def = 10;
	this->HP = 70;
	this->gold = 1;
	this->race = "Goblin";
	this->symbol = 'N';
	this->hasCompass = false;
	this->chamberID = chamberID;
	this->position = position;
}

Goblin::~Goblin(){}