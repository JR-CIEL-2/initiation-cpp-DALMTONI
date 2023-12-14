#ifndef DEF_SCOOTER
#define DEF_SCOOTER

#include <iostream>
#include <string>
#include "Vehicule.hpp"

using namespace std;

class Scooter : public Vehicule
{
private:

    int cylindre;

public:
    Scooter(string marq, int vit, string coul, int cyl); // Ajout du constructeur
    ~Scooter();
    void setCylindre(int cyl);
    int getCylindre();
};

#endif