#ifndef CHARACTER_H
#define CHARACTER_H
#include <string>
#include "posn.h"
#include <cmath>


class Character {
	protected:
		int Atk;
		int Def;
		int HP;
		int gold;
		std::string race;
		char symbol;
		
	public:
		Posn position;
		virtual int getAtk();
		virtual int getDef();
		virtual int getHP();
		virtual int getGold();
		Posn getPosition();
		std::string getRace();
		char getSymbol();
		virtual void move(Posn position) = 0;
		virtual void takeDamage(int amount);
		

};


#endif