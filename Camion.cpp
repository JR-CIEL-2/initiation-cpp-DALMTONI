#include "Vehicule.hpp"
#include "Camion.hpp"
#include <string>

using namespace std;

Camion::Camion() : Vehicule()
{
}

Camion::Camion(string marq, int vit, string coul, int pos, int poids) : Vehicule(coul, marq, vit, pos) 
{
    m_poidsCharge = poids;
}

Camion::Camion(const Camion &autre) : Vehicule(autre)
{
    m_poidsCharge = autre.m_poidsCharge;
}

Camion::~Camion() 
{
    //cout << "un objet a ete detrui" << endl;
}

void Camion::setPoidsCharge(int poids) 
{
    m_poidsCharge = poids;
}

void Camion::getPoidsCharge() const
{
    cout << "le poids de charge est de " << m_poidsCharge<< endl;
}