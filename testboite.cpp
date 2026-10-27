#include <iostream>
#include "boite.hpp"
#include "string"


int main(){
    Boite b1(2.0, 3.0, 4.0);
    Boite b2(5.0, 6.0, 7.0);

    b1.afficher();
    b2.afficher();

    std::cout << "Nombre de boîtes: " << Boite::getNbBoites() << std::endl;
    return 0;
};