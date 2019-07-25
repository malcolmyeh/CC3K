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

void Player::move(Posn position){
	this->position.x = position.x;
	this->position.y = position.y;
}