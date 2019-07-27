#include "enemy.h"

bool Enemy::compass(){
	return this->hasCompass;
}

int Enemy::cID(){
	return this->chamberID;
}

bool Enemy::withinRange(Posn player){
	Posn epos = this->getPosition();
	std::string directions[8] = {"ea", "we", "no", "so", "ne", "nw", "se", "sw"};
	for (int i = 0; i < 8; ++i){
		if (epos.getNew(directions[i]) == player){
			return true;
		}
	}
	return false;
}

std::string Enemy::dealDamage(Character * opponent){
	double amount;
	std::string combatMsg;
	std::string defender = opponent->getRace();
	std::string attacker = this->race;

	int attack = this->Atk;
	int defense = opponent->getDef;

	
	amount = ceil((100/(100+defense)) * attack);

	opponent->takeDamage(amount);
	
	combatMsg = attacker + " deals " + amount + " damage to " + defender + " (" + opponent->getHP() + "). ";
	
	if (opponent->getHP() == 0){
		combatMsg += defender + " has been slain. You have earned " + opponent->getGold() + " gold.";
		this->gold += opponent->getGold();
	}


	return combatMsg;
}