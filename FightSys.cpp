#include "FightSys.h"
#include <iostream>

using namespace std;

int FightSys::Fight(Player *Attacker, Player *Target)
{
    char line[50];
    int EffectiveAttack = Attacker->attack - Target->defense;

    while (Target->health > 0)
    {
        // Get user input if autopilot is set to false.
        if (Attacker->autoPilot == false)
        {
            DisplayFightMenu();

            int choice;
            cout << ">> "; // Sharp brackets indicate that the user should type something.
            fgets(line, sizeof(line), stdin);
            sscanf(line, "%d", &choice);

            switch (choice)
            {
            case 1:
                Target->health = Target->health - EffectiveAttack;
                cout << Attacker->name << " inflicted " << EffectiveAttack << " damage to " << Target->name << endl;
                Player::DisplayStats(Target);
                break;
            case 2:
                cout << "Running away!\n";
                return (0);
            default:
                cout << "Bad input. Try again.\n";
                break;
            }
        }
        else
        {
            // Autopilot. Userless player acts independently.
            Target->health = Target->health - EffectiveAttack;
            cout << Attacker->name << " inflicted " << EffectiveAttack << " damage to " << Target->name << endl;
            Player::DisplayStats(Target);
        }

        // Once turn is finished, check to see if someone has one, otherwise, swap and continue.
        if (Target->health <= 0)
        {
            cout << Attacker->name << " has bested " << Target->name << " in combat.\n";
        }
        else
        {
            // Swap attacker and target.
            Player *tmp = Attacker;
            Attacker = Target;
            Target = tmp;
        }
    }

    return (0);
}

void FightSys::DisplayFightMenu()
{
    std::cout << "1. Attack" << std::endl;
    std::cout << "2. Run Away" << std::endl;
}