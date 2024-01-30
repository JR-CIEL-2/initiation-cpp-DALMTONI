#include <iostream>
#include "Vehicule.hpp"
#include "Scooter.hpp"
#include "Voiture.hpp"
#include "Camion.hpp"

using namespace std ;

int main()
{
   
    Scooter gamos2("vespa",120, "noir",  20, 250);
    Scooter gamos3(gamos2);
    gamos2.getCylindree();
    gamos2.getCouleur();
    gamos3.getMarque();
    gamos2.afficher_pure();
    gamos2.afficher_imp();

    cout<<" "<<endl;

    Voiture voit1("renault",100,"gris", 10, true);
    voit1.getALaClim();
    voit1.getCouleur();
    voit1.getMarque();
    voit1.afficher_pure();

    cout<<" "<<endl;

    Camion camtar1("skoda",180,"bleu", 50, 800);
    camtar1.getPoidsCharge();
    camtar1.getCouleur();
    camtar1.getMarque();
    camtar1.afficher_pure();

    cout<<" "<<endl;
    cout<<"Pointeurs :"<<endl;
    cout<<" "<<endl;

    Scooter* ptr_gamos = new Scooter("tesla",190, "rouge", 20, 125);
    ptr_gamos -> getCylindree();
    ptr_gamos -> getCouleur();
    ptr_gamos -> getMarque();
    ptr_gamos -> afficher_pure();
    delete ptr_gamos;

    cout<<" "<<endl;

    return 0;
}

