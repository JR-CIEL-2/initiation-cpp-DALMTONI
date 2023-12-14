#include "Vehicule.hpp"
#include "Camion.hpp"
#include <string>

using namespace std;

// Implémentation des membres de la classe Camion


Camion::Camion(string marq, int vit, string coul, int poids) : Vehicule(marq, vit, coul) {
    poidsCharge = 0;
    marque= marq;
    vitesse= vit;
    couleur=coul;
}

Camion::~Camion() {
    
}

void Camion::setPoidsCharge(int poids) {
    poidsCharge = poids;
}

int Camion::getPoidsCharge() {
    return poidsCharge;
}