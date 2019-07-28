#include "character.h"


int Character::getAtk(){
	return this->Atk;
}

int Character::getDef(){
	return this->Def;
}

int Character::getHP(){
	return this->HP;
}

int Character::getGold(){
	return this->gold;
}

Posn Character::getPosition(){
	return this->position;
}

std::string Character::getRace(){
	return this->race;
}

char Character::getSymbol(){
	return this->symbol;
}

void Character::takeDamage(int amount){
	this->HP -= amount;
	if (this->HP < 0){
		this->HP = 0;
	}
}

void Character::move(Posn position){
	this->position.x = position.x;
	this->position.y = position.y;
}

void Character::updateGold(int amount){
	this->gold += amount;
}