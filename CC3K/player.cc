#include "player.h"

Player * Player::getPlayer(){
	return this;
}

void Player::updateGold(int amount){
	this->gold += amount;
}

bool Player::barrier(){
	return this->hasBarrier;
}

int Player::chamber(){
	return this->curChamber;
}

int Player::getMaxHP(){
	return this->MaxHP;
}


std::string Player::dealDamage(Character * opponent){
	double amount;
	std::string combatMsg;
	std::string defender = opponent->getRace();
	int attack = this->Atk;
	int defense = opponent->getDef;


	amount = ceil((100/(100+defense)) * attack);

	opponent->takeDamage(amount);
	
	combatMsg = "Player deals " + amount + " damage to " + defender + " (" + opponent->getHP() + "). ";
	
	if (opponent->getHP() == 0){
		combatMsg += defender + " has been slain. You have earned " + opponent->getGold() + " gold.";
		this->gold += opponent->getGold();
	}


	return combatMsg;
}

void Player::move(Posn position){
	this->position.x = position.x;
	this->position.y = position.y;
}