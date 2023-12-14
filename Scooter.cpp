#include "Vehicule.hpp"
#include "Scooter.hpp"
#include <string>

using namespace std;

// Implémentation des membres de la classe Scooter


Scooter::Scooter(string marq, int vit, string coul, int cyl) : Vehicule(marq, vit, coul) {
    cylindre = 0;
    marque= marq;
    vitesse= vit;
    couleur=coul;
}

Scooter::~Scooter() {
    // Destructeur
}

void Scooter::setCylindre(int cyl) {
    cylindre = cyl;
}

int Scooter::getCylindre() {
    return cylindre;
}