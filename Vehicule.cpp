#include "Classe.hpp"

using namespace std;

Voiture::Voiture() : m_km_h(0)
{
    cout << "un objet est cree" <<endl;
}

Voiture::Voiture(string marque, string couleur, int km_h)
{
    m_marque=marque;
    m_couleur=couleur;
    m_km_h=km_h;
    
}

Voiture::~Voiture()
{
    cout << "l objet est detruit" <<endl;
}

/*
void Voiture::setMarque(string marque) 
{
    m_marque = marque;
}

void Voiture::setCouleur(string couleur)
{
    m_couleur = couleur;
}

void Voiture::setVitesse(int km_h)
{
    m_km_h = km_h;
}
*/

string Voiture::getMarque()
{
    return m_marque;
}

string Voiture::getCouleur()
{
    return m_couleur;
}

int Voiture::getVitesse()
{
    return m_km_h;
}

/////