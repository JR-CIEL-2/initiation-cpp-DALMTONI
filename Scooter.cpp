#include "Vehicule.hpp"
#include "Scooter.hpp"
#include <string>

using namespace std;

// Implémentation des membres de la classe Scooter


Scooter::Scooter(string marq, int vit, string coul, int cyl) : Vehicule(marq, vit, coul) {
    m_cylindre = cyl;
    
}

Scooter::~Scooter() {
    cout << "un objet a ete detrui" << endl;
}

Scooter::Scooter(const Scooter &autre) : Scooter(autre)
{
    m_cylindre = autre.m_cylindre;
}

void Scooter::setCylindre(int cyl) {
    m_cylindre = cyl;
}

int Scooter::getCylindre() {
    cout << "la clim est de " << m_cylindre << endl;
}