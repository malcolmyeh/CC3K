#include "dragon.h"

Dragon::Dragon(posn position, DragonHoard * dragonHoard, BarrierSuit * barrierSuit, int chamberID){
	this->Atk = 20;
	this->Def = 20;
	this->HP = 150;
	this->gold = 0;
	this->race = "Dragon";
	this->symbol = 'D';
	this->hasCompass = false;
	this->chamberID = chamberID;
	this->position = position;
	this->dragonHoard = dragonHoard;
	this->barrierSuit = barrierSuit;
}

Dragon::~Dragon(){}


