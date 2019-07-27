#include "troll.h"

Troll::Troll(Posn position, int chamberID){
	this->Atk = 25;
	this->Def = 15;
	this->HP = 120;
	this->gold = 1;
	this->race = "Troll";
	this->symbol = 'T';
	this->hasCompass = false;
	this->chamberID = chamberID;
	this->position = position;
}

Troll::~Troll(){}