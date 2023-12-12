#include <iostream>
#include <string>
#include "Vehicule.hpp"

using namespace std;

int main()
{
    //   Création des Vehicule
    
    //Vehicule * ptr_cars = new Vehicule("dacia","rouge", 50);
    //Voiture* ptr_cars = new Voiture ;

    
    //   Création en donnant chaque élément
    
    string setMarque("bmw");
    string setCouleur("jaune");
    int setVitesse(100);
    

    //   Voyons voir la voiture
    cout << "La marque est " <<  getMarque() << endl;
    cout << "La couleur est " << getCouleur() << endl;
    cout << "la vitesse est de " << getVitesse() << endl;
   
   delete ptr_cars;

    return 0;
}