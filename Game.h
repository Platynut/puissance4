#ifndef GAME_H
#define GAME_H
#include "Grid.h"
#include "Joueur.h"


class Game {
private:
    Joueur j1;
    Joueur j2;
    Joueur* currentPlayer;
    Grid grid;
public:
    Game();
    void start();
    void selectNoms();
    void play(int col);
};

#endif
