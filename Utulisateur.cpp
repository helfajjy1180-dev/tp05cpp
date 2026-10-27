
#include "Utilisateur.hpp"

int Utilisateur::nbUtilisateursConnectes = 0;

Utilisateur::Utilisateur(string n, string r) {
    nom = n;
    role = r;
    nbUtilisateursConnectes++;
}

Utilisateur::~Utilisateur() {
    nbUtilisateursConnectes--;
}

int Utilisateur::getNbUtilisateursConnectes() {
    return nbUtilisateursConnectes;
}

void Utilisateur::afficher() {
    cout << "Nom : " << nom << endl;
    cout << "Role : " << role << endl;
}
