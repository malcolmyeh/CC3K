#include "elf.h"



Elf::Elf(int HP, int gold, Posn position) {
	this->Atk = 30;
	this->Def = 10;
	this->HP = HP;
	this->gold = gold;
	this->race = "Elf";
	this->symbol = '@';
	this->position = position;
}

Elf::~Elf() {}


