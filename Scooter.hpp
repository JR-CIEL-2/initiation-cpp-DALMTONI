#ifndef DEF_SCOOTER
#define DEF_SCOOTER

#include <iostream>
#include <string>
#include "Vehicule.hpp"

class Scooter : public Vehicule
{
private:

    int m_cylindre;

public:
    Scooter();
    Scooter(std::string marq, int vit, std::string coul, int cyl); // Ajout du constructeur
    ~Scooter();
    Scooter(const Scooter& autre);
    void setCylindre(int cyl);
    int getCylindre() const;
};

#endif