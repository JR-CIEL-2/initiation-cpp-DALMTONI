#include "Scooter.hpp"
#include <iostream>

using namespace std;

Scooter::Scooter() : Vehicule()
{
}

Scooter::Scooter(string marq, int vit, string coul, int cyl, int pos) : Vehicule(coul, marq, vit, pos)
{
    m_cylindree = cyl;
}

Scooter::Scooter(const Scooter &autre) : Vehicule(autre)
{
    m_cylindree = autre.m_cylindree;
}

Scooter::~Scooter()
{
    cout << "un objet a ete detruit" << endl;
}

void Scooter::setCylindree(int cyl)
{
    m_cylindree = cyl;
}

void Scooter::getCylindree() const
{
    cout << "la cylindree est de " << m_cylindree << endl;
}
