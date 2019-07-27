#include "orc.h"



Orc::Orc(int HP, int gold, Posn position) {
	this->Atk = 30;
	this->Def = 25;
	this->HP = HP;
	this->gold = gold;
	this->race = "Orc";
	this->symbol = '@';
	this->position = position;
}

Orc::~Orc() {}




