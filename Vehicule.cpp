#include "Vehicule.hpp"

using namespace std;

Vehicule::Vehicule() {
    // Initialisation par défaut
    marque = "";
    vitesse = 0;
    couleur = "";
}

Vehicule::Vehicule(string marq, int vit, string coul) {
    // Initialisation avec des paramètres
    marque = marq;
    vitesse = vit;
    couleur = coul;
}

Vehicule::~Vehicule() {
    // Destructeur
}

void Vehicule::seDeplacer() {
    cout << "Le véhicule se déplace." << endl;
}

void Vehicule::setVitesse(int vit) {
    vitesse = vit;
}

void Vehicule::setMarque(string marq) {
    marque = marq;
}

void Vehicule::setCouleur(string coul) {
    couleur = coul;
}

string Vehicule::getMarque() {
    return marque;
}

string Vehicule::getCouleur() {
    return couleur;
}

int Vehicule::getVitesse() {
    return vitesse;
}



// Implémentation des membres de la classe Camion

Camion::Camion() {
    poidsCharge = 0;
}

Camion::Camion(string marq, int vit, string coul, int poids) : Vehicule(marq, vit, coul) {
    poidsCharge = poids;
}

Camion::~Camion() {
    // Destructeur
}

void Camion::setPoidsCharge(int poids) {
    poidsCharge = poids;
}

int Camion::getPoidsCharge() {
    return poidsCharge;
}

// Implémentation des membres de la classe Scooter

Scooter::Scooter() {
    cylindre = 0;
}

Scooter::Scooter(string marq, int vit, string coul, int cyl) : Vehicule(marq, vit, coul) {
    cylindre = cyl;
}

Scooter::~Scooter() {
    // Destructeur
}

void Scooter::setCylindre(int cyl) {
    cylindre = cyl;
}

int Scooter::getCylindre() {
    return cylindre;
}
