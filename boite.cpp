#include "boite.hpp"
#include <iostream>

    int Boite::nbBoites = 0;

   Boite:: Boite(double l, double L, double h){
      longueur = l; 
      largeur = L;
      hauteur = h;
      nbBoites++;
}
   Boite::~Boite() {
      nbBoites--;
    }

     int Boite::getNbBoites() {
      return nbBoites;
    }
void Boite::afficher() {
    std::cout << "Longueur: " << longueur << ", Largeur: " << largeur << ", Hauteur: " << hauteur << std::endl;
}

