#include <iostream>
#include "Vehicule.hpp"
#include "Scooter.hpp"

using namespace std ;

int main()
{
   
    Scooter gamos2("vespa",120, "noir",  20, 250);
    //Scooter gamos3(gamos2);
    /*gamos2.getCylindree();
    gamos2.getCouleur();
    gamos3.getMarque();*/

    gamos2.afficher();
    return 0;
}

