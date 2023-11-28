#include <iostream>
#include <string>
#include "Classe.hpp"

using namespace std;

int main()
{
    //   Création des voitures
    
    Voiture* ptr_cars = new Voiture("dacia","rouge", 50);
    //Voiture* ptr_cars = new Voiture ;

    /*
    //   Création en donnant chaque élément
    
    ptr_cars->setMarque("bmw");
    ptr_cars->setCouleur("jaune");
    ptr_cars->setVitesse(100);
    */

    //   Voyons voir la voiture
    cout << "La marque est " <<  ptr_cars->getMarque() << endl;
    cout << "La couleur est " << ptr_cars->getCouleur() << endl;
    cout << "la vitesse est de " << ptr_cars->getVitesse() << endl;
   
   delete ptr_cars;

    return 0;
}