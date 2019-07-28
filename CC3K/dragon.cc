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

Item *Dragon::getHoard() {
	return this->hoard;
}

Item *Dragon::getSuit() {
	return this->suit;
}
