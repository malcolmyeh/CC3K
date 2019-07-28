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

std::string Phoenix::dealDamage(Character * opponent){
	double amount;
	std::string combatMsg;
	std::string attacker = this->race;

	int attack = this->Atk;
	int defense = opponent->getDef();

	if (rand() % 2 == 0){
		combatMsg = attacker + "'s attack missed. ";
		return combatMsg;
	}
	amount = ceil((100.0/(100.0+defense)) * attack);


	if (rand() % 5 == 0){
		//rebirth
		opponent->takeDamage((int)amount);
		combatMsg = attacker + " deals " + std::to_string((int)amount) + " damage to you (HP: " + std::to_string(opponent->getHP()) + "). ";
		combatMsg += "Phoenix consumes itself in fire and is reborn (HP: 50). ";
		this->HP = 50;

	} else if (rand() % 5 == 1 || rand() % 5 == 2){
		//critical strike
		amount *= 1.5;
		opponent->takeDamage((int)amount);
		combatMsg = attacker + " unleashes its fire energy, dealing " + std::to_string((int)amount) + " damage to you (HP: " + std::to_string(opponent->getHP()) + "). ";

	} else {
		opponent->takeDamage((int)amount);
		combatMsg = attacker + " deals " + std::to_string((int)amount) + " damage to you (HP: " + std::to_string(opponent->getHP()) + "). ";
	}
	
	if (opponent->getHP() == 0){
		combatMsg += "You have been slain.";
	}

	return combatMsg;
}