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
    Vehicule(string m_marq, int m_vit, string m_coul); // avec des paramètres
    ~Vehicule();

    void seDeplacer();
    void setVitesse(int vit);
    void setMarque(string marq);
    void setCouleur(string coul);

    string getMarque();
    string getCouleur();
    int getVitesse();
};

#endif