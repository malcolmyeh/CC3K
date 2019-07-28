#ifndef DRAGON_H
#define DRAGON_H
#include "enemy.h"
#include "gold.h"
#include "barriersuit.h"

<<<<<<< HEAD
class Dragon : public Enemy {
	private:
		bool isHostile;
		dragonHoard *hoard;
		barrierSuit *suit;
	public:
		Dragon(Posn position, dragonHoard *hoard, barrierSuit *suit, int chamberID);
		~Dragon();

		dragonHoard *getHoard();
		barrierSuit *getSuit();

		void setPos(Posn pos);

		/*void dealDamage(Character * opponent) override;
		void takeDamage(amount Integer) override;*/
		std::string dealDamage(Character * opponent) override;
=======
class Dragon : public Enemy
{
private:
    bool isHostile;
    Item *hoard;
    Item *suit;
public:
    Dragon(Posn position, Item *hoard, Item *suit, int chamberID);
    ~Dragon();
    Item *getHoard();
    Item *getSuit();
    void setPos(Posn pos);
    std::string dealDamage(Character *opponent) override;
>>>>>>> ead3794945c16689f9e30b5613204eac08dfa5bc
};

#endif