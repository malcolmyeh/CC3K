#include "werewolf.h"

Werewolf::Werewolf(Posn position, int chamberID)
{
    this->Atk = 30;
    this->Def = 5;
    this->HP = 120;
    this->gold = 1;
    this->race = "Werewolf";
    this->symbol = 'W';
    this->hasCompass = false;
    this->chamberID = chamberID;
    this->position = position;
    this->stunned = false;
}

Werewolf::~Werewolf() {}

std::string Werewolf::dealDamage(Character *opponent)
{

    double amount;
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

    if (this->HP <= 30)
    {
        combatMsg = attacker + "'s unstoppable rage increases its damage by 3. ";
        this->Atk += 3;
    }
    else if (this-> HP <= 60)
    {
        combatMsg = attacker + "'s blinding rage increases its damage by 2. ";
        this->Atk += 2;
    }
    else if (this-> HP <= 90)
    {
        combatMsg = attacker + "'s rage increases its damage by 1. ";
        this->Atk += 1;
    }

    amount = ceil((100.0 / (100.0 + defense)) * attack);

    opponent->takeDamage((int)amount);

    combatMsg += attacker + " deals " + std::to_string((int)amount) + " damage to you (HP: " + std::to_string(opponent->getHP()) + "). ";

    if (opponent->getHP() == 0)
    {
        combatMsg += "You have been slain.";
    }

    return combatMsg;
}

