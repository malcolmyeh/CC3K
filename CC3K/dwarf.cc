#include "dwarf.h"



Dwarf::Dwarf(int HP, int gold, Posn position) {
	this->Atk = 20;
	this->Def = 30;
	this->HP = HP;
	this->gold = gold;
	this->race = "Dwarf";
	this->symbol = '@';
	this->position = position;
}

Dwarf::~Dwarf() {}


