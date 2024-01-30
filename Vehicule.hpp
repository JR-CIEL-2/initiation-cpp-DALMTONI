#ifndef DEF_VEHICULE
#define DEF_VEHICULE

#include <string>

class Vehicule {
    private :
    std::string m_marque;
    int m_vitesse;
    std::string m_couleur;
    int m_pos;

    public:
    Vehicule();
    Vehicule(std::string coul, std::string marq, int vit, int pos);
    Vehicule(const Vehicule &autre);
    ~Vehicule();

    void setVitesse(int vit);
    void setCouleur(std::string coul);
    void setMarque(std::string marq);
    void getVitesse();
    void getCouleur();
    void getMarque();
    void seDeplacer(int pos);

    virtual void afficher() const = 0 ;

};

#endif