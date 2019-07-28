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

std::string Troll::dealDamage(Character * opponent){
	double amount;
	double secondHit;

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
	secondHit = amount * 0.5;

	if (rand() % 3 == 0){
		//double hits player
		combatMsg = attacker + " strikes you twice for " + std::to_string((int)amount) + " + " + std::to_string((int)secondHit) + " damage (HP: " + std::to_string(opponent->getHP()) + "). ";
		opponent->takeDamage((int)(amount+secondHit));
	} else if (rand() % 3 == 1){
		//hurts itself with second hit
		combatMsg = attacker + " deals " + std::to_string((int)amount) + " damage to you (HP: " + std::to_string(opponent->getHP()) + "). ";
		combatMsg += attacker + " hurts itself in confusion for " + std::to_string((int)secondHit) + " damage. (HP: " + std::to_string(this->HP) + "). ";
		opponent->takeDamage((int)amount);
		this->takeDamage((int)secondHit);
	} else {
		opponent->takeDamage((int)amount);
		combatMsg = attacker + " deals " + std::to_string((int)amount) + " damage to you (HP: " + std::to_string(opponent->getHP()) + "). ";
	}
	
	if (opponent->getHP() == 0){
		combatMsg += "You have been slain.";
	}

	return combatMsg;
}