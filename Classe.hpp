#ifndef DEF_VOITURE
#define DEF_VOITURE

#include <iostream>
#include <string>


class Voiture
{
    public:

    std::string couleur;

    Voiture();
    Voiture(std::string marque, std::string couleur, int km_h);
    ~Voiture();

    std::string setMarque(std::string marque);
    std::string setCouleur(std::string couleur);
    int setVitesse(int km_h);
    
    std::string getMarque();
    std::string getCouleur();
    int getVitesse();
    
    private:

    std::string marque;
    int km_h;
    
};

#endif