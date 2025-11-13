#include "Game.h"

#include <iostream>
#include <string>

#include "Grid.h"
#include "Joueur.h"

using namespace std;

Game::Game() : j1(), j2(), grid(){
    currentPlayer= &j1;
}

void Game::start() {
    Grid g;
    int selectedColumn;
    g.display();
    while (true) {
        cout << "Joueur " << currentPlayer->getNom() << ", choisissez une colonne (1-7): " << endl;
        cin >> selectedColumn;
        if (currentPlayer == &j1) {
            currentPlayer = &j2;
        } else {
            currentPlayer = &j1;
        }
    }
}

void Game::selectNoms() {
    string nom1, nom2;
    cout << "Entrez le nom du Joueur 1: ";
    cin >> nom1;
    j1.setNom(nom1);
    cout << "Entrez le nom du Joueur 2: ";
    cin >> nom2;
    j2.setNom(nom2);
}

void Game::play(int col) {

}