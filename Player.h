#pragma once

#include <string>
#include <stdbool.h>

// Player Structure
class Player
{
public:
    std::string name;
    int classP;
    int health;
    int mana;
    int attack;  // NEWː Attack power.
    int defense; // NEWː Resistance to attack.
    bool autoPilot;
    int PlayersCreated; // Keep track of players created.

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
};