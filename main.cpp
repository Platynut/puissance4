#include <iostream>

#include "Game.h"
#include "Joueur.h"
using namespace std;

int main()
{
    Game game;
    game.selectNoms();
    game.start();

    system("pause");
    return 0;
}