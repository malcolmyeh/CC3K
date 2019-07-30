#ifndef ENEMY_H
#define ENEMY_H

#include "character.h"
#include <cstdlib>
#include "gold.h"
#include "barriersuit.h"

class Gold;

class barrierSuit;

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
    virtual Gold *getHoard();
    virtual barrierSuit *getSuit();

};


#endif