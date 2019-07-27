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
		//virtual void move(Posn position);
		void move(Posn position); //do we need two different moves for player/enemy? can handle random movement in game core
		virtual void takeDamage(int amount);
		//should we add back in dealDamage? to make it abstract class
		/* an Animal class doesn’t have implementation of move() 
		(assuming that all animals move), but all animals must know how to move. */

};


#endif