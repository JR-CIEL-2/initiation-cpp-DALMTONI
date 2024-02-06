#include "garage.hpp"
#include <iostream>

using namespace std;

Garage::Garage()
{
    m_longueur = 10;
    m_largeur = 10;
    m_hauteur= 5;
    m_porte = true;
    cout << "Un garage a ete cree" << endl;
}

Garage::Garage(bool porte, int hauteur, int longueur, int largeur)
{
    m_longueur = longueur;
    m_largeur = largeur;
    m_hauteur = hauteur;
    m_porte = porte;
    cout << "Un gararge a ete cree" << endl;
}

Garage::Garage(const Garage &autre)
{
    m_longueur = autre.m_longueur;
    m_largeur = autre.m_largeur;
    m_hauteur = autre.m_hauteur;
    m_porte = autre.m_porte;
    cout << "Un garage de recopie a ete cree" << endl;
}

Garage::~Garage()
{
    cout << "le garage a ete detruit" << endl;
}

void Garage::setLongueur(int longueur)
{
    m_longueur = longueur;
}

void Garage::setLargeur(int largeur)
{
    m_largeur = largeur;
}

void Garage::setHauteur(int hauteur)
{
    m_hauteur = hauteur;
}

void Garage::setPortail(bool porte)
{
    m_porte = porte;
}

void Garage::getPortail()
{
    if(m_porte == true){
        cout << "Le portail est ouvert" << endl;
    }else{
        cout << "Le portail est fermé" << endl;
    }
}

void Garage::getLongueur()
{
    cout << "La longueur du garage est de " << m_longueur << endl;
}
void Garage::getLargeur()
{
    cout << "La largeur du garage est de " << m_largeur << endl;
}
void Garage::getHauteur()
{
    cout << "La hauteur du garage est de " << m_hauteur << endl;
}

//garage