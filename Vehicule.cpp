#include "Vehicule.hpp"
#include <iostream>

using namespace std;

Vehicule::Vehicule()
{
    m_couleur = "noire";
    m_marque = "dacia";
    m_vitesse = 150;
    m_pos = 10;
    cout << "Un objet a ete cree" << endl;
}

Vehicule::Vehicule(string coul, string marq, int vit, int pos)
{
    m_couleur = coul;
    m_marque = marq;
    m_vitesse = vit;
    m_pos = pos;
    cout << "Un objet a ete cree" << endl;
}

Vehicule::Vehicule(const Vehicule &autre)
{
    m_couleur = autre.m_couleur;
    m_marque = autre.m_marque;
    m_vitesse = autre.m_vitesse;
    m_pos = autre.m_pos;
    cout << "Un objet recopie a ete cree" << endl;
}

Vehicule::~Vehicule()
{
    cout << "un objet a ete detruit" << endl;
}

void Vehicule::seDeplacer(int pos)
{
    m_pos = m_pos + pos;
}
void Vehicule::setVitesse(int vit)
{
    m_vitesse = vit;
}
void Vehicule::setCouleur(string coul)
{
    m_couleur = coul;
}

void Vehicule::setMarque(string marq)
{
    m_marque = marq;
}

void Vehicule::getVitesse()
{
    cout << "La vitesse est de " << m_vitesse << endl;
}

void Vehicule::getMarque()
{
    cout << "La marque est de " << m_marque << endl;
}

void Vehicule::getCouleur()
{
    cout << "La couleur est de " << m_couleur << endl;
}