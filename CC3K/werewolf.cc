#include "werewolf.h"

Werewolf::Werewolf(Posn position, int chamberID){
	this->Atk = 30;
	this->Def = 5;
	this->HP = 120;
	this->gold = 1;
	this->race = "Werewolf";
	this->symbol = 'W';
	this->hasCompass = false;
	this->chamberID = chamberID;
	this->position = position;
}

Werewolf::~Werewolf(){}