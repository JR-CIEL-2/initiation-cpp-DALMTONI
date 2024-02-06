#include "autoradio.hpp"
#include <iostream>

using namespace std;

AutoRadio::AutoRadio()
{
    m_volume = 35;
    m_etat = true;
    cout << "Une radio a ete cree" << endl;
}

AutoRadio::AutoRadio(int volume, bool etat)
{
    m_volume = volume;
    m_etat = etat;
    cout << "Une radio a ete cree" << endl;
}

AutoRadio::AutoRadio(const AutoRadio &autre)
{
    m_volume = autre.m_volume;
    m_etat = autre.m_etat;
    cout << "Une radio recopie a ete cree" << endl;
}

AutoRadio::~AutoRadio()
{
    cout << "le radio a ete detruit" << endl;
}


void AutoRadio::setVolume(int volume)
{
    m_volume = volume;
}

void AutoRadio::setEtat(bool etat)
{
    m_etat = etat;
}

void AutoRadio::getEtat()
{
    if(m_etat == true){
        cout << "L'autoradio est allumé" << endl;
    }else{
        cout << "L'autoradio est éteint" << endl;
    }
}

void AutoRadio::getVolume()
{
    cout << "Le volume de l'autoradio est de " << m_volume << endl;
}


//garage