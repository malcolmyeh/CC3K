#ifndef PLAYER_H
#define PLAYER_H

#include "character.h"

class Player : public Character
{
protected:
    int MaxHP;
    int curChamber;
    bool hasBarrier;
public:
    virtual Player *getPlayer();

    bool barrier();
    int chamber();
    int getMaxHP();
    virtual std::string dealDamage(Character *opponent) override;
    void takeDamage(int amount) override;
};

#endif