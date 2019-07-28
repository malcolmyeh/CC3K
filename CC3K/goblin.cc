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

std::string Goblin::dealDamage(Character * opponent){
	double amount;
	std::string combatMsg;
	std::string attacker = this->race;

	int attack = this->Atk;
	int defense = opponent->getDef();
	if (this->stunned){
		this->stunned = false;
		combatMsg = attacker + " is stunned. ";
		return combatMsg;
	}
	if (rand() % 2 == 0){
		combatMsg = attacker + "'s attack missed. ";
		return combatMsg;
	}
	amount = ceil((100.0/(100.0+defense)) * attack);

	opponent->takeDamage((int)amount);
	
	combatMsg = attacker + " deals " + std::to_string((int)amount) + " damage to you (HP: " + std::to_string(opponent->getHP()) + "). ";
	
	if (rand() % 2 == 0 && opponent->getGold() >= 1){
		opponent->updateGold(-1);
		combatMsg += attacker + " swipes 1 gold from you. (Gold: " + std::to_string(opponent->getGold()) + ")";
	}

	if (opponent->getHP() == 0){
		combatMsg += "You have been slain.";
	}

	return combatMsg;
}