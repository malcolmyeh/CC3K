#include "player.h"

Player *Player::getPlayer()
{   return this;
 
}

bool Player::barrier()
{
    return this->hasBarrier;
}


int Player::getMaxHP()
{
    return this->MaxHP;
}


std::string Player::dealDamage(Character *opponent)
{
    double amount;
    std::string combatMsg;
    std::string defender = opponent->getRace();
    int attack = this->Atk;
    int defense = opponent->getDef();

    amount = ceil((100.0 / (100.0 + defense)) * attack);

    opponent->takeDamage((int)amount);

    combatMsg = "You deal " + std::to_string((int)amount) + " damage to " + defender + " (HP: " + std::to_string(opponent->getHP()) + "). ";

    if (opponent->getHP() == 0)
    {
        combatMsg += defender + " has been slain. You have earned " + std::to_string(opponent->getGold()) + " gold.";
        this->updateGold(opponent->getGold());
    }

    return combatMsg;
}

void Player::takeDamage(int amount)
{
    if (this->barrier())
    {
        this->HP -= ceil(amount / 2);
    }
    else
    {
        this->HP -= amount;
    }
    if (this->HP < 0)
    {
        this->HP = 0;
    }
}

void Player::heal(int amount)
{
    this->HP += amount;
    if (this->HP > this->MaxHP){
        this->HP = this->MaxHP;
    }
}

void Player::increaseAtk(int amount)
{
    this->Atk += amount;
}

void Player::increaseDef(int amount)
{
    this->Def += amount;
}