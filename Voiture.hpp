#ifndef DEF_VOITURE
#define DEF_VOITURE

#include <iostream>
#include <string>
#include "Vehicule.hpp"

using namespace std;

class Voiture : public Vehicule
{
private:
    bool clim;

public:
    Voiture(string marq, int vit, string coul, int clim); // Ajout du constructeur
    ~Voiture();
    void setClim(int cli);
    int getClim();
};

#endif