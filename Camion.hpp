#ifndef DEF_CAMION
#define DEF_CAMION

#include <iostream>
#include <string>
#include "Vehicule.hpp"

class Camion : public Vehicule
{
private:
    int m_poidsCharge;

public:
    Camion();
    Camion(std::string marq, int vit, std::string coul, int pos, int poids); // Ajout du constructeur
    ~Camion();
    Camion(const Camion& autre);
    void setPoidsCharge(int poids);
    void getPoidsCharge()const;

    void afficher_pure() const override{
         std::cout << "Ceci est un Camion." << std::endl;
    };
};

#endif
//vehicule
