#include "player.h"
//#include <iostream>

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
	int defense = opponent->getDef();

	//std::cout << "atk: " << std::to_string(attack) << " def: " << std::to_string(defense) << std::endl;

	amount = ceil((100.0/(100.0+defense)) * attack);

	//std::cout << std::to_string((int)amount) << std::endl;

	opponent->takeDamage((int)amount);
	
	combatMsg = "You deal " + std::to_string((int)amount) + " damage to " + defender + " (HP: " + std::to_string(opponent->getHP()) + "). ";
	
	if (opponent->getHP() == 0){
		//std::cout << "DEAD" << std::endl;
		combatMsg += defender + " has been slain. You have earned " + std::to_string(opponent->getGold()) + " gold.";
		this->gold += opponent->getGold();
	}


	return combatMsg;
}

void Player::move(Posn position){
	this->position.x = position.x;
	this->position.y = position.y;
}

void Player::takeDamage(int amount){
	if (this->barrier()){
		this->HP -= ceil(amount / 2);
	} else {
		this->HP -= amount;
	}
	if (this->HP < 0){
			this->HP = 0;
	}
}