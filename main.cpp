#include <iostream>
#include <string>
#include "Vehicule.hpp"
#include "Scooter.hpp"
#include "Camion.hpp"
#include "Voiture.hpp"

using namespace std;

int main()
{
    // scooter

    Scooter gamos2("noire", "vespa", 120, 20 , 250 );
    Scooter gamos3(gamos2);
    gamos2.getCylindre();
    gamos2.getCouleur();
    gamos2.getMarque();
    gamos3.getCouleur();
    cout <<" "<<endl;
    
    // voiture
    Voiture caisse("jaune", "skodia", 100, 50, 300);
    caisse.getALaClim();
    caisse.getCouleur();
    caisse.getMarque();

    return 0;
}