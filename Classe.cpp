#include "Classe.hpp"

using namespace std;

Voiture::Voiture() : m_km_h(0)
{
    cout << "un objet est cree" <<endl;
}

Voiture::Voiture(string m_marque, string m_couleur, int m_km_h): m_marque("Renault"), m_couleur("Gris"), m_km_h(30000)
{
}

Voiture::~Voiture()
{
    cout << "l objet est detruit" <<endl;
}

string Voiture::setMarque(string marque) 
{
    m_marque = marque;
}

string Voiture::setCouleur(string couleur)
{
    m_couleur = couleur;
}

int Voiture::setVitesse(int km_h)
{
    m_km_h = km_h;
}

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