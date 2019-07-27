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
	std::string attacker = this->race;

	int attack = this->Atk;
	int defense = opponent->getDef();

	amount = ceil((100/(100+defense)) * attack); //player takeDamage takes care of barrier suit

	opponent->takeDamage((int)amount);
	
	combatMsg = attacker + " deals " + amount + " damage to Player (" + opponent->getHP() + "). ";
	
	return combatMsg;
}