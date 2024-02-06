#ifndef DEF_VOITURE
#define DEF_VOITURE

#include <iostream>
#include <string>
#include "Vehicule.hpp"
#include "moteur.hpp"


class Voiture : public Vehicule
{
private:
    bool m_aLaClim;
    Moteur moteur_;

public:
    Voiture();
    Voiture(std::string marq, int vit, std::string coul, int pos, bool clim); 
    Voiture(const Voiture& autre);
    ~Voiture();
    void setALaClim(bool clim);
    void getALaClim() const;

    void afficher_pure() const override{
         std::cout << "Ceci est une Voiture." << std::endl;
    };

    void demarrerVoiture() const;
};

#endif
//vehicule