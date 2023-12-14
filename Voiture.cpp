#include "Vehicule.hpp"
#include "Voiture.hpp"
#include <string>

using namespace std;

// Implémentation des membres de la classe Voiture

    Voiture::Voiture(string marq, int vit, string coul, int clim) : Vehicule(marq, vit, coul) {
    clim = 0;
    m_marq= marq;
    m_vit= vit;
    m_copul=coul;
}


void Voiture::setClim(int cli) {
    clim = cli;
}

int Voiture::getClim() {
    return clim;
}