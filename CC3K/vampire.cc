#include "vampire.h"

Vampire::Vampire(Posn position, int chamberID)
{
    this->Atk = 25;
    this->Def = 25;
    this->HP = 50;
    this->gold = 1;
    this->race = "Vampire";
    this->symbol = 'V';
    this->hasCompass = false;
    this->chamberID = chamberID;
    this->position = position;
    this->stunned = false;
}

Vampire::~Vampire() {}

std::string Vampire::dealDamage(Character *opponent)
{
    double amount;
    double lifesteal;

    std::string combatMsg;
    std::string attacker = this->race;

    int attack = this->Atk;
    int defense = opponent->getDef();

    if (this->stunned)
    {
        this->stunned = false;
        combatMsg = attacker + " is stunned. ";
        return combatMsg;
    }

    if (rand() % 2 == 0)
    {
        combatMsg = attacker + "'s attack missed. ";
        return combatMsg;
    }

    amount = ceil((100.0 / (100.0 + defense)) * attack);
    lifesteal = ceil(amount * 0.25);

    opponent->takeDamage((int)amount);

    this->HP += ((int)lifesteal);
    if (this->HP > 50){
        this->HP = 50;
    }

    combatMsg = attacker + " deals " + std::to_string((int)amount) + " damage to you (HP: " + std::to_string(opponent->getHP()) + "). ";
    combatMsg += "Vampire lifesteals for " + std::to_string((int)lifesteal) + " HP (HP: " + std::to_string(this->HP) + "). ";
    if (opponent->getHP() == 0)
    {
        combatMsg += "You have been slain.";
    }

    return combatMsg;
}