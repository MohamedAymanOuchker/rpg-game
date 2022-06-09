#include <iostream>
#include <stdlib.h>
#include <string>
#include "Player.h"
#include "FightSys.h"
#include "Game.h"

using namespace std;

int main()
{
    Game g;
    Hero h = Hero(Player::ACCOUNTANT, "Sir Leeroy");    // Create a hero.
    Villain v = Villain(Player::RANGER, "Sir Jenkins"); // Create a villain.

    h.SetAutoPilot(false); // Set the hero to not auto-pilot.
    v.SetAutoPilot(false); // Set the hero to not auto-pilot.

    cout << "---------------------------Bienvenue sur Assassin's creed----------------------------" << endl
         << "----------------------------programmed by Ayman & Elias------------------------------" << endl;
    cout << "Menu:" << endl
         << "1.Débuter le jeu " << endl
         << "2.Principe du jeu" << endl;

    int choix;
    cout << ">> ";
    cin >> choix;

    switch (choix)
    {
    case 1:
        g.choixLieu();
        cout << "\nVous etes " << g.getLieu() << endl;
        g.choixObjet(&h);
        Player::DisplayStats(&v); // Display stats for villain.
        FightSys::Fight(&h, &v);  // Fight!
        break;
    case 2:
        g.aide();
        main();
        break;
    default:
        main();
    }
    Player::DisplayStats(&v); // Display stats for villain.
    FightSys::Fight(&h, &v);  // Fight!
    return 0;
}