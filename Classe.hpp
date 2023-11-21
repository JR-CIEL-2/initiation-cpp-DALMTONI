#ifndef DEF_VOITURE
#define DEF_VOITURE

#include <iostream>
#include <string>


class Voiture
{
    public:

    std::string m_couleur;

    Voiture();
    Voiture(std::string m_marque, std::string m_couleur, int m_km_h);
    ~Voiture();

    void setMarque(std::string m_marque);
    void setCouleur(std::string m_couleur);
    void setVitesse(int m_km_h);
    
    std::string getMarque();
    std::string getCouleur();
    int getVitesse();
    
    private:

    std::string m_marque;
    int m_km_h;
    
};

#endif

//////