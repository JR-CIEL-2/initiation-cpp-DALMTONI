#ifndef DEF_COMPLEXE
#define DEF_COMPLEXE

#include <string>

class Complexe
{
public:
Complexe(float x, float y); // premier constructeur de la classe :
// fixe la partie réelle à x, la partie imaginaire à y
Complexe(); // second constructeur de la classe :
// initialise un nombre complexe à 0
void Lis(); // lit un nombre complexe entré au clavier
void Affiche(); // affiche un nombre complexe
private:
float re, im; // parties réelle et imaginaire
};

#endif