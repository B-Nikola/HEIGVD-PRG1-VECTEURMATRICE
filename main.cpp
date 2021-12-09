/*
-----------------------------------------------------------------------------------
Nom du fichier : main.cpp
Nom du Labo :
Auteur(s) : Bouattit Nikola Delétraz Alexandre
Date creation : 08.12.2021
Description : <TODO>
Remarque(s) : <TODO>
Compilateur : Mingw-w64 g++ 11.2.0
-----------------------------------------------------------------------------------
*/
#include <cstdlib>
#include <iostream>
#include <limits>

#include "calculMatriciel.h"

using namespace std;
int main() {

    Matrice test = {{1, 2, 3, 6, 4, 2, 1},
                    {4, 5, 6},
                    {7, 8, 9}};
   Matrice test2 = {{},
                   {},
                   {}};

    // Début de programme
    cout << "Bienvenue" << endl;

    //Entrée user
   cout << sommeLigne(test)  << endl;
   cout << sommeLigne(test2) << endl;
   cout << sommeColonne(test) << endl;





    // fin de programme
    cout << "Presser ENTER pour quitter";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
 return EXIT_SUCCESS;
}