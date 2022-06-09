#pragma once
#include <string>
#include "Player.h"

class Game
{
private:
    int objet;
    std::string lieu;
    int chxlieu;

public:
    void choixObjet(Player *);
    void choixLieu();
    int getObject();
    std::string getLieu();
    void aide();
};