// exemple d’utilisation de la classe Complexe
#include <iostream.h> // pour les entrées-sorties
#include "complexe.h" // pour la déclaration de la classe Complexe
void main() // traitement principal
{
Complexe z1(0.0, 1.0); // appel implicite du constructeur paramétré
Complexe z2; // appel implicite du constructeur non paramétré
z1.Affiche(); // affichage de z1
cout << "\nEntrer un nombre complexe : ";
z2.Lis(); // saisie de z2
cout << "\nVous avez entré : ";
z2.Affiche(); // affichage de z2
Complexe z3 = z1 + z2; // somme de deux complexes grâce à l’opérateur +
cout << "\n\nLa somme de ";
z1.Affiche();
cout << " et ";
z2.Affiche();
cout << " est ";
z3.Affiche();
}