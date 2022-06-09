#pragma once

#include <string>
#include <stdbool.h>

class Player
{
public:
    std::string name;
    int classP;
    int health;
    int mana;
    int attack;
    int defense;
    bool autoPilot;
    int PlayersCreated;

    // Classes are enumerated. WARRIOR = 0; RANGER = 1, etc.
    enum ClassEnum
    {
        WARRIOR,
        RANGER,
        MAGE,
        ACCOUNTANT
    };

    Player(int, std::string);
    static void DisplayStats(Player *target);
    void SetName(std::string);
    void SetAutoPilot(bool);
};

// Hérittage
class Hero : public Player
{
public:
    Hero(int, std::string);
};

class Villain : public Player
{
public:
    Villain(int, std::string);
};