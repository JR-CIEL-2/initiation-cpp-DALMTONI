#include "Vehicule.hpp"
#include "Voiture.hpp"
#include <string>

using namespace std;

Voiture::Voiture() : Vehicule()
{
}

Voiture::Voiture(string marq, int vit, string coul, int clim) : Vehicule(marq, vit, coul) {
    
    m_aLaClim = clim;
}

Voiture::Voiture(const Voiture &autre) : Vehicule(autre)
{
    m_aLaClim = autre.m_aLaClim;
}

Voiture::~Voiture() 
{
    cout << "un objet a ete detrui" << endl;
}

void Voiture::setClim(int cli) 
{
    m_aLaClim = cli;
}

int Voiture::getClim() const
{
    cout << "la clim est de " << m_aLaClim << endl;
}