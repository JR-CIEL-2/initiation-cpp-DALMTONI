#ifndef DEF_VEHICULE
#define DEF_VEHICULE

#include <iostream>
#include <string>

class Vehicule
{
private:

    std::string m_marque;
    int m_vitesse;
    std::string m_couleur;
    int m_pos;

public:

    Vehicule(); // par défaut
    Vehicule(std::string m_marq, int m_vit, std::string m_coul, int m_pos); // avec des paramètres
    ~Vehicule();

    void seDeplacer();
    void setVitesse(int vit);
    void setMarque(std::string marq);
    void setCouleur(std::string coul);

    std::string getMarque();
    std::string getCouleur();
    int getVitesse();
};

#endif