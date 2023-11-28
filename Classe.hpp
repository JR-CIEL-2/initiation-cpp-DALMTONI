#ifndef DEF_VOITURE
#define DEF_VOITURE

#include <iostream>
#include <string>

using namespace std;

class Voiture
{
    public:

    string m_couleur;

    Voiture();
    Voiture(string m_marque, string m_couleur, int m_km_h);
    ~Voiture();

    /*
    void setMarque(string m_marque);
    void setCouleur(string m_couleur);
    void setVitesse(int m_km_h);
    */

    string getMarque();
    string getCouleur();
    int getVitesse();
    
    private:

    string m_marque;
    int m_km_h;
    
};

#endif

//////