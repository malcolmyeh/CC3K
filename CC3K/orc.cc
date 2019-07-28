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

std::string Orc::dealDamage(Character * opponent){
	double amount;
	std::string combatMsg;
	std::string defender = opponent->getRace();
	int attack = this->Atk;
	int defense = opponent->getDef();

	amount = ceil((100.0/(100.0+defense)) * attack);

	opponent->takeDamage((int)amount);
	
	combatMsg = "You deal " + std::to_string((int)amount) + " damage to " + defender + " (HP: " + std::to_string(opponent->getHP()) + "). ";
	
	if (opponent->getHP() == 0){
		combatMsg += defender + " has been slain. You have earned " + std::to_string(opponent->getGold()) + " gold.";
		this->gold += opponent->getGold();
	}


	return combatMsg;
}



