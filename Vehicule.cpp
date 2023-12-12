#include "Vehicule.hpp"

using namespace std;

Vehicule::Vehicule() : m_vitesse(0)
{
    cout << "un objet est cree" <<endl;
}

Vehicule::Vehicule(string marque, string couleur, int vitesse)
{
    m_marque=marque;
    m_couleur=couleur;
    m_vitesse=vitesse;
    
}

Vehicule::~Vehicule()
{
    cout << "l objet est detruit" <<endl;
}

/*
void Vehicule::setMarque(string marque) 
{
    m_marque = marque;
}

void Vehicule::setCouleur(string couleur)
{
    m_couleur = couleur;
}

void Vehicule::setVitesse(int vitesse)
{
    m_vitesse = vitesse;
}
*/

string Vehicule::getMarque()
{
    return m_marque;
}

string Vehicule::getCouleur()
{
    return m_couleur;
}

int Vehicule::getVitesse()
{
    return m_vitesse;
}

/////