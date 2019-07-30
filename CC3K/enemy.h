#ifndef ENEMY_H
#define ENEMY_H

#include "character.h"
#include <cstdlib>
#include "gold.h"
#include "barriersuit.h"


class Enemy : public Character
{
protected:
    bool hasCompass;
    int chamberID;
public:
    virtual std::string dealDamage(Character *opponent) override;
    bool compass();
    int cID();
    bool withinRange(Posn player);
    void setCompass(bool compass);
    virtual dragonHoard *getHoard() = 0;
    virtual barrierSuit *getSuit() = 0;
};


#endif