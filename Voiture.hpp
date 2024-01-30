#ifndef DEF_VOITURE
#define DEF_VOITURE

#include <iostream>
#include <string>
#include "Vehicule.hpp"


class Voiture : public Vehicule
{
private:
    bool m_aLaClim;

public:
    Voiture();
    Voiture(std::string marq, int vit, std::string coul, int pos, bool clim); 
    Voiture(const Voiture& autre);
    ~Voiture();
    void setALaClim(bool clim);
    void getALaClim() const;
};

#endif