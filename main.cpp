#include <iostream>
#include <stdlib.h>
#include <string>
#include "Player.h"
#include "FightSys.h"

using namespace std;

int main()
{
    Player Hero = Player(Player::ACCOUNTANT, "Sir Leeroy");
    Player Villain = Player(Player::RANGER, "Sir Jenkins");

    Player::DisplayStats(&Villain);   // Before the fight.
    FightSys::Fight(&Hero, &Villain); // FIGHTǃ
}