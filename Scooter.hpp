#ifndef DEF_SCOOTER
#define DEF_SCOOTER

#include <iostream>
#include <string>
#include "Vehicule.hpp"

class Scooter : public Vehicule
{
private:

    int m_cylindree;

public:
    Scooter();
    Scooter(std::string marq, int vit, std::string coul, int cyl, int pos); // Ajout du constructeur
    ~Scooter();
    Scooter(const Scooter& autre);

    void setCylindree(int cyl);
    void getCylindree() const;

    //virtuelle pure
    void afficher_pure() const override{
         std::cout << "Ceci est un Scooter." << std::endl;
    };

    // virtuelle implémenté
    void afficher_imp() const override {
        std::cout << "Je suis un Scooter." << std::endl;
    }

};

#endif
//vehicule