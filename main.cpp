#include <iostream>
#include <string>
#include "Vehicule.hpp"

using namespace std;

int main()
{
    //   Création des Voitures
    
    Voiture maVoiture("Audi", 120, "Gris", 1);
    std::cout << "Marque de la voiture : " << maVoiture.getMarque() << std::endl;
    std::cout << "Vitesse de la voiture : " << maVoiture.getVitesse() << std::endl;
    std::cout << "Couleur de la voiture : " << maVoiture.getCouleur() << std::endl;
    std::cout << "     "<< std::endl;

    //   Création des Camions
    
    Camion monCamion("Mercedes", 80, "Noir", 0);
    monCamion.setPoidsCharge(5000);
    std::cout << "Marque du camion : " << monCamion.getMarque() << std::endl;
    std::cout << "Vitesse du camion : " << monCamion.getVitesse() << std::endl;
    std::cout << "Couleur du camion : " << monCamion.getCouleur() << std::endl;
    std::cout << "     "<< std::endl;
    
    //   Création des Scooter
    
    Scooter monScooter("Yamaha", 60, "Bleu", 0);
    monScooter.setCylindre(125);
    std::cout << "Marque du scooter : " << monScooter.getMarque() << std::endl;
    std::cout << "Vitesse du scooter : " << monScooter.getVitesse() << std::endl;
    std::cout << "Couleur du scooter : " << monScooter.getCouleur() << std::endl;
    std::cout << "     "<< std::endl;

    return 0;
}