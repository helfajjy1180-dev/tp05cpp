
#include "Utilisateur.hpp"

int main() {
    Utilisateur* u1 = new Utilisateur("Ali", "admin");

    cout << "Utilisateurs connectes : "
         << Utilisateur::getNbUtilisateursConnectes() << endl;

    Utilisateur* u2 = new Utilisateur("Sara", "visiteur");

    cout << "Utilisateurs connectes : "
         << Utilisateur::getNbUtilisateursConnectes() << endl;

    Utilisateur* u3 = new Utilisateur("Youssef", "visiteur");

    cout << "Utilisateurs connectes : "
         << Utilisateur::getNbUtilisateursConnectes() << endl;

    delete u2;

    cout << "\nApres deconnexion de Sara : "
         << Utilisateur::getNbUtilisateursConnectes() << endl;

    delete u1;

    cout << "Apres deconnexion de Ali : "
         << Utilisateur::getNbUtilisateursConnectes() << endl;

    delete u3;

    cout << "Apres deconnexion de Youssef : "
         << Utilisateur::getNbUtilisateursConnectes() << endl;

    return 0;
}
