#include "Vehicule.hpp"
#include "Voiture.hpp"
#include <string>

using namespace std;

Voiture::Voiture() : Vehicule()
{

}

Voiture::Voiture(string marq, int vit, string coul, int clim) : Vehicule(marq, vit, coul) {
    clim = 0;
    m_marq= marq;
    m_vit= vit;
    m_copul=coul;
}

Voiture::~Voiture() 
{
    cout << "un objet a ete detrui" << endl;
}

void Voiture::setClim(int cli) {
    clim = cli;
}

int Voiture::getClim() {
    return clim;
}