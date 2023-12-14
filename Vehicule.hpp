#ifndef DEF_VEHICULE
#define DEF_VEHICULE

#include <iostream>
#include <string>

using namespace std;
class Vehicule
{
private:

    string marque;
    int vitesse;
    string couleur;

public:

    Vehicule(); // par défaut
    Vehicule(string marq, int vit, string coul); // avec des paramètres
    ~Vehicule();

    void seDeplacer();
    void setVitesse(int vit);
    void setMarque(string marq);
    void setCouleur(string coul);

    string getMarque();
    string getCouleur();
    int getVitesse();
};

class Voiture : public Vehicule
{
private:

    int clim;

public:

    Voiture();
    Voiture(string marq, int vit, string coul, int cli); // Ajout du constructeur
    ~Voiture();

    void setClim(int cli);
    int getClim();
};

class Camion : public Vehicule
{

private:
    int poidsCharge;

public:
    Camion();
    Camion(string marq, int vit, string coul, int poids); // Ajout du constructeur
    ~Camion();

    void setPoidsCharge(int poids);
    int getPoidsCharge();
};

class Scooter : public Vehicule
{
private:

    int cylindre;

public:

    Scooter();
    Scooter(string marq, int vit, string coul, int cyl); // Ajout du constructeur
    ~Scooter();

    void setCylindre(int cyl);
    int getCylindre();
};

#endif