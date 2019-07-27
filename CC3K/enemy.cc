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

	amount = ceil((100.0/(100.0+defense)) * attack); //player takeDamage takes care of barrier suit

	opponent->takeDamage((int)amount);
	
	combatMsg = attacker + " deals " + std::to_string((int)amount) + " damage to you (HP: " + std::to_string(opponent->getHP()) + "). ";
	
	if (opponent->getHP() == 0){
		//std::cout << "DEAD" << std::endl;
		combatMsg += "You have been slain.";
	}

	return combatMsg;
}