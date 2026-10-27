
#include "Produit.hpp"

int main() {
    Produit p1("Ordinateur", 5000);
    Produit p2("Clavier", 200);
    Produit p3("Souris", 100);

    cout << "=== TVA initiale : 20% ===" << endl;

    p1.afficher();
    p2.afficher();
    p3.afficher();

    Produit::modifierTVA(10);

    cout << "\n=== TVA modifiee : 10% ===" << endl;

    p1.afficher();
    p2.afficher();
    p3.afficher();

    return 0;
}
