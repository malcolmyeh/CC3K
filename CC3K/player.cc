#include "player.h"

Player * Player::getPlayer(){
	return this;
}

void Player::updateGold(int amount){
	this->gold += amount;
}

bool Player::hasBarrier(){
	return this->hasBarrier;
}

int Player::curChamber(){
	return this->curChamber;
}

int Player::getMaxHP(){
	return this->MaxHP;
}

void Player::move(Posn position){
	this->position.x = position.x;
	this->position.y = position.y;
}