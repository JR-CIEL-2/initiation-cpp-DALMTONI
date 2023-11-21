#include <iostream>
#include <string>
#include "Classe.hpp"

using namespace std;

int main()
{
    // Création des voitures
    
    Voiture cars("dacia","rouge", 50);

    // Création en donnant chaque élément

    //cars.setMarque("bmw");
   // cars.setCouleur("jaune");
    //cars.setVitesse(100);
    

    // Temps mort ! Voyons voir la voiture...
    cout << "La marque est " <<  cars.getMarque() << endl;
    cout << "La couleur est " << cars.getCouleur() << endl;
    cout << "la vitesse est de " << cars.getVitesse() << endl;
   

    return 0;
}