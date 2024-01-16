#ifndef DEF_VOITURE
#define DEF_VOITURE

#include <iostream>
#include <string>
#include "Vehicule.hpp"

using namespace std;

class Voiture : public Vehicule
{
private:
    bool m_aLaClim;

public:
    Voiture();
    Voiture(string marq, int vit, string coul, int clim); 
    ~Voiture();
    void setALaClim(int cli);
    int getALaClim();
};

#endif