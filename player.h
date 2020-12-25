#ifndef PLAYER_H
#define PLAYER_H

#include "character.h"

class Player : public Character
{
protected:
    int MaxHP;
    bool hasBarrier;
public:
    virtual Player *getPlayer();
    bool barrier();
    int getMaxHP();
    virtual std::string dealDamage(Character *opponent) override;
    virtual void takeDamage(int amount) override;
    void heal(int amount);
    void increaseAtk(int amount);
    void increaseDef(int amount);
    void setBarrier(bool barrier);
};

#endif

