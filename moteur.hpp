#ifndef DEF_MOTEUR
#define DEF_MOTEUR

#include <iostream>
#include <string>

class Moteur {
    private :
    int m_puissance;
    
    public:
    Moteur();
    Moteur (int puissance);
    Moteur(const Moteur &autre);
    ~Moteur();

    void setPuissance(int puissance);
    void getPuissance();
    void demarrer() const;

    
};

#endif
//garage