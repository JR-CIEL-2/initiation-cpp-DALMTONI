#ifndef DEF_CAMION
#define DEF_CAMION

#include <iostream>
#include <string>
#include "Vehicule.hpp"

using namespace std;

class Camion : public Vehicule
{
private:
    int poidsCharge;

public:
    Camion(string marq, int vit, string coul, int poids); // Ajout du constructeur
    ~Camion();
    void setPoidsCharge(int poids);
    int getPoidsCharge();
};

#endif
