#include "moteur.hpp"
#include <iostream>

using namespace std;

Moteur::Moteur()
{
    m_puissance = 150;
    cout << "Un moteur a ete cree" << endl;
}

Moteur::Moteur(int puissance)
{
    m_puissance = puissance ;
    cout << "Un moteur a ete cree" << endl;
}

Moteur::Moteur(const Moteur &autre)
{
    m_puissance = autre.m_puissance;
    cout << "Un moteur de recopie a ete cree" << endl;
}

Moteur::~Moteur()
{
    cout << "le garage a ete detruit" << endl;
}

void Moteur::demarrer() const {
    cout << "Le moteur démarre." << endl;
}


void Moteur::setPuissance(int puissance)
{
    m_puissance = puissance;
}

void Moteur::getPuissance()
{
    cout << "La puissance du moteur est de " << m_puissance << endl;
}

//Moteur