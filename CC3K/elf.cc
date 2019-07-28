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

std::string Elf::dealDamage(Character * opponent){
	double amount;
	std::string combatMsg;
	std::string defender = opponent->getRace();
	int attack = this->Atk;
	int defense = opponent->getDef();

	if (this->HP < 35){
		if (rand() % 2 == 0){
			this->HP = 35;
			combatMsg += "Elven magic restored health (HP: " + std::to_string(this->HP) + "). ";
		}
	}

	amount = ceil((100.0/(100.0+defense)) * attack);

	if (rand() % 10 == 0){
		opponent->getStunned();
		opponent->takeDamage((int)amount);
		combatMsg += "You cast Shockwave dealing " + std::to_string((int)amount) + " damage to " + defender + " (HP: " + std::to_string(opponent->getHP()) + ") and stunning them. ";
	} else {
		opponent->takeDamage((int)amount);
		combatMsg += "You deal " + std::to_string((int)amount) + " damage to " + defender + " (HP: " + std::to_string(opponent->getHP()) + "). ";
	}

	

	
	if (opponent->getHP() == 0){
		combatMsg += defender + " has been slain. You have earned " + std::to_string(opponent->getGold()) + " gold.";
		this->gold += opponent->getGold();
	}


	return combatMsg;
}
