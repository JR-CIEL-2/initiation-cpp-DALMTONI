// définition de la classe Complexe
#include <iostream.h> // pour les entrées-sorties
#include "complexe.h" // déclaration de la classe Complexe
Complexe::Complexe(float x, float y) // constructeur avec param`etres
{
re = x;
im = y;
}
Complexe::Complexe() // constructeur sans param`etre
{
re = 0.0;
im = 0.0;
}
void Complexe::Lis() // lecture d’un complexe
{
cout << "Partie réelle ? ";
cin >> re;
cout << "Partie imaginaire ? ";
cin >> im;
}
void Complexe::Affiche() // affichage d’un complexe
{
cout << re << " + i " << im;
}