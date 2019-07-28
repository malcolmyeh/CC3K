#include "dragon.h"

Dragon::Dragon(posn position, Item *hoard, Item *suit, int chamberID){
	this->Atk = 20;
	this->Def = 20;
	this->HP = 150;
	this->gold = 0;
	this->race = "Dragon";
	this->symbol = 'D';
	this->hasCompass = false;
	this->chamberID = chamberID;
	this->position = position;
	this->hoard = hoard;
	this->suit = suit;
}

Dragon::~Dragon(){}

<<<<<<< HEAD
Item *Dragon::getHoard() {
	return this->hoard;
}

Item *Dragon::getSuit() {
	return this->suit;
=======
void Dragon::setPos(Posn pos){
	this->position = pos;
}

std::string Enemy::dealDamage(Character * opponent){
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

	if (rand() % 3 == 0){
		amount *= 1.75;
		opponent->takeDamage((int)amount);
		combatMsg = attacker + " breathes fire, dealing" + std::to_string((int)amount) + " damage to you (HP: " + std::to_string(opponent->getHP()) + "). ";
	} else {
		opponent->takeDamage((int)amount);
		combatMsg = attacker + " deals " + std::to_string((int)amount) + " damage to you (HP: " + std::to_string(opponent->getHP()) + "). ";
	}

	if (this->HP < 50){
		if (rand() % 2 == 0){
			this->HP += 15;
			combatMsg += "Dragon recovers 15 health. ";
		}
	}

	
	if (opponent->getHP() == 0){
		combatMsg += "You have been slain.";
	}

	return combatMsg;
>>>>>>> 055f0e2bcb1ccb9a14713063afbddde52d3e6c5c
}
