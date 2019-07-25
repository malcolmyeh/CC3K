#ifndef CHARACTER_H
#define CHARACTER_H
#include <string>
#include "posn.h"


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
		posn getPosition();
		std::string getRace();
		char getSymbol();
		virtual void move(int x, int y) = 0;
		std::string dealDamage(Character * opponent); 
		virtual void takeDamage(int amount);

}


#endif