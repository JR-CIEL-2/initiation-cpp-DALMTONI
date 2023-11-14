#include <iostream>
#include <string>
#include "Personnage.hpp"

using namespace std;

int main()
{
    // Création des personnages
    Personnage david, goliath("Epée aiguisée", 20), superman("Sabre Laser", 30);

    // Au combat !
    /*
    goliath.attaquer(david);
    david.boirePotionDeVie(20);
    goliath.attaquer(david);
    david.attaquer(goliath);
    goliath.changerArme("Double hache tranchante vénéneuse de la mort", 40);
    goliath.attaquer(david);
    */

    superman.attaquer(goliath);
    superman.attaquer(david);

    david.attaquer(superman);
    david.changerArme("Sabre Laser", 30);
    david.attaquer(goliath);

    goliath.attaquer(superman);
    goliath.boirePotionDeVie(20);

    superman.boirePotionDeVie(10);
    superman.changerArme("Epée aiguisée", 20);
    superman.attaquer(david);


    // Temps mort ! Voyons voir la vie de chacun...
    cout << "David" << endl;
    david.afficherEtat();
    cout << endl << "Goliath" << endl;
    goliath.afficherEtat();
    cout << endl << "superman" << endl;
    superman.afficherEtat();

    return 0;
}