#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>


class Character {
	protected:
		int Atk;
		int Def;
		int HP;
		int gold;
		std::string race;
		char symbol;
	public:
		virtual int getAtk();
		virtual int getDef();
		virtual int getHP();
		virtual int getGold();
		virtual std::string getRace();
		virtual void move(int x, int y);
		virtual void dealDamage(Character * opponent); //write function here
		virtual void takeDamage(int amount);
}


#endif