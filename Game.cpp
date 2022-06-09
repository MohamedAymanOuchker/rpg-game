#include "Game.h"
#include "Player.h"
#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>

#define NBLIEUX 5

using namespace std;

void Game::choixObjet(Player *Hero)
{
    cout << "\nQuel objet va vous accompagner?" << endl;
    cout << "1.Une armure etincelante:+5 defense" << endl
         << "2.Un bracelet de force:+5 attack" << endl
         << "3.Un bracelet d'agilite:+5 mana" << endl
         << "4.Un baton sertie d'une pierre precieuse:+5 health" << endl
         << ">> ";
    cin >> objet;

    switch (objet) {
    case 1:
        Hero->defense += 5;
        break;
    case 2:
        Hero->attack += 5;
        break;
    case 3:
        Hero->mana += 5;
        break;
    case 4:
        Hero->health += 5;
        break;
    default:
        cout << "Vous n'avez pas choisi d'objet valide." << endl;
        break;
    }
}
void Game::choixLieu()
{
    srand(time(0));
    chxlieu = 1 + rand() % NBLIEUX;

    switch (chxlieu)
    {
    case 1:
        lieu = "dans le temple d'Alexendrie";
        break;
    case 2:
        lieu = "à Memphis";
        break;
    case 3:
        lieu = "à Sinar";
        break;
    case 4:
        lieu = "dans une grotte de Crocodipolis";
        break;
    case 5:
        lieu = "dans une foret de Fayoum";
        break;
    default:
        break;
    }
}
int Game::getObject()
{
    return objet;
}
std::string Game::getLieu()
{
    return lieu;
}

void Game::aide() // Fonction pour l'explication du principe du jeu
{
    cout << "\nIl y a 4 stats gere par le jeu:" << endl
         << "1.Attack:Reflète la quantité de dommages qu’un personnage inflige à un ennemi." << endl
         << "2.Defense:Diminue les dégâts qu’un personnage reçoit d’un ennemi." << endl
         << "3.Health:Représente le montant des dommages qui peuvent être subis avant qu’un personnage soit rendu mort, s’évanouisse ou devienne autrement incapable de combattre." << endl
         << "4.Mana:Indique leur pouvoir d’utiliser des capacités magiques spéciales" << endl;
}