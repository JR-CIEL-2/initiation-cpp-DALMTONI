#include "Vehicule.hpp"
#include "Voiture.hpp"
#include <string>

using namespace std;

Voiture::Voiture() : Vehicule()
{
}

Voiture::Voiture(string marq, int vit, string coul, int pos, bool clim) : Vehicule(coul, marq, vit, pos) {
    
    m_aLaClim = clim;
}

Voiture::Voiture(const Voiture &autre) : Vehicule(autre)
{
    m_aLaClim = autre.m_aLaClim;
}

Voiture::~Voiture() 
{
    cout << "un objet a ete detruit" << endl;
}

void Voiture::setALaClim(bool clim) 
{
    m_aLaClim = clim;
}

void Voiture::getALaClim() const
{
    cout << "la clim est de " << m_aLaClim << endl;
}