#ifndef DEF_GARAGE
#define DEF_GARAGE

#include <iostream>
#include <string>

class Garage {
    private :
    int m_longueur;
    int m_largeur;
    int m_hauteur;
    bool m_porte;
    
    public:
    Garage();
    Garage(bool porte, int hauteur, int longueur, int largeur);
    Garage(const Garage &autre);
    ~Garage();

    void setLongueur(int longueur);
    void setLargeur(int largeur);
    void setHauteur(int hauteur);
    void setPortail(bool porte);
    void getLongueur();
    void getLargeur();
    void getHauteur();
    void getPortail();

    
};

#endif
//garage