#ifndef BOITE_HPP
#define BOITE_HPP

class Boite {
    double longueur;
    double largeur;
    double hauteur;
    static int nbBoites;
public:
    
    
    Boite(double l, double L, double h);
~Boite();

    static int getNbBoites() ;
    void afficher();
};

#endif