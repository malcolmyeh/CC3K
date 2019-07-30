#ifndef BUFF_H
#define BUFF_H

#include "player.h"

class Buff : public Player {
    protected:
        Player *player;
        int value;

    public:
        Player *getPlayer() override;
        std::string getType();
        int getValue();
        int getGold() override;
        int getHP() override;
        virtual int getAtk() override;
        virtual int getDef() override;
        std::string getRace() override;
     	char getSymbol() override;
     	void takeDamage(int amount) override;
     	std::string dealDamage(Character *opponent) override;
        Posn getPosition() override;
        void move(Posn p) override;
};

#endif