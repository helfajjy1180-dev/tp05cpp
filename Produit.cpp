
#include "Produit.hpp"

float Produit::tauxTVA = 20.0;

Produit::Produit(string n, float prix) {
    nom = n;
    prixHT = prix;
}

float Produit::getPrixTTC() {
    return prixHT * (1 + tauxTVA / 100);
}

void Produit::modifierTVA(float nouveauTaux) {
    tauxTVA = nouveauTaux;
}

void Produit::afficher() {
    cout << "Produit : " << nom << endl;
    cout << "Prix TTC : " << getPrixTTC() << " DH" << endl;
}
