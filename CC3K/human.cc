#include "human.h"



Human::Human(int HP, int gold, Posn position) : Atk(20), Def(20), HP(HP), gold(gold), race("Human"), symbol("@"), position(position) {}

Human::~Human();

void Human::dealDamage(Character * opponent){

}

void Human::takeDamage(int amount){
	if (this->hasBarrier()){
		this->HP -= ceil(amount / 2);
	} else {
		this->HP -= amount;
	}
	if (this->HP < 0){
			this->HP = 0;
	}
}