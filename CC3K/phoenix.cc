#include "phoenix.h"

Phoenix::Phoenix(Posn position, int chamberID){
	this->Atk = 35;
	this->Def = 20;
	this->HP = 50;
	this->gold = 1;
	this->race = "Phoenix";
	this->symbol = 'X';
	this->hasCompass = false;
	this->chamberID = chamberID;
	this->position = position;
}

Phoenix::~Phoenix(){}