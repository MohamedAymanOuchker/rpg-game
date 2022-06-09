#include "Player.h"
#include <iostream>
#include <string>

Player::Player(int classP, std::string name)
{
    // Assign name.
    SetName(name);

    // Assign stats based on the given class.
    switch (classP)
    {
    case WARRIOR:
        health = 60;
        mana = 0;
        attack = 3;
        defense = 5;
        break;
    case RANGER:
        health = 35;
        mana = 0;
        attack = 3;
        defense = 2;
        break;
    case MAGE:
        health = 20;
        mana = 60;
        attack = 5;
        defense = 0;
        break;
    case ACCOUNTANT:
        health = 100;
        mana = 100;
        attack = 5;
        defense = 5;
        break;
    default:
        health = 10;
        mana = 0;
        attack = 0;
        defense = 0;
        break;
    }

    if (PlayersCreated > 0)
    {
        autoPilot = true;
    }
    else
    {
        autoPilot = false;
    }
    ++PlayersCreated;
}

void Player::DisplayStats(Player *target)
{
    std::cout << "Name: " << target->name << std::endl;
    std::cout << "Health: " << target->health << std::endl;
    std::cout << "Mana: " << target->mana << std::endl;
}

void Player::SetName(std::string name)
{
    this->name = name;
}