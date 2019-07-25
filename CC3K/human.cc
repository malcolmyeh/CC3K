#include "human.h"



Human::Human(int HP, int gold, Posn position) {
	this->Atk = 20;
	this->Def = 20;
	this->HP = HP;
	this->gold = gold;
	this->race = "Human";
	this->symbol = '@';
	this->position = position;
}

Human::~Human() {}


void Human::takeDamage(int amount){
	if (this->barrier()){
		this->HP -= ceil(amount / 2);
	} else {
		this->HP -= amount;
	}
	if (this->HP < 0){
			this->HP = 0;
	}
}