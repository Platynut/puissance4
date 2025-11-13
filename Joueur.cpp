#include "Joueur.h"

Joueur::Joueur() {}

Joueur::Joueur(string n) : nom(n) {}

string Joueur::getNom() const {
    return nom;
}

void Joueur::setNom(const string& n) {
    nom = n;
}