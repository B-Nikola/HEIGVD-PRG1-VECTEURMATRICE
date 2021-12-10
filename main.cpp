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

   Matrice test1 = {{1, 2, 3, 6, 4, 2, 1},
                    {4, 5},
                    {7, 8, 9}};
   Matrice test2 = {{},
                    {},
                    {}};
   Matrice test3 = {{12,41,25},
                    {45,7,47},
                    {42,4,43}};

   // Début de programme
   cout << "Bienvenue" << endl;

   //Entrée user

   //Test estCaree
   cout << "-----------estcarree----------------" << endl;
   cout << "matrice test1 : " << estCarree(test1) << endl;
   cout << "matrice test2 : " << estCarree(test2) << endl;
   cout << "matrice test3 : " << estCarree(test3) << endl;

   //Test estReguliere
   cout << "-----------estReguliere----------------" << endl;
   cout << "matrice test1 : " << estReguliere(test1) << endl;
   cout << "matrice test2 : " << estReguliere(test2) << endl;
   cout << "matrice test3 : " << estReguliere(test3) << endl;

   //Test minCol
   cout << "-----------minCol----------------" << endl;
   cout << "matrice test1 : " << minCol(test1) << endl;
   cout << "matrice test2 : " << minCol(test2) << endl;
   cout << "matrice test3 : " << minCol(test3) << endl;

   //Test de sommeLigne
   cout << "-----------Somme Ligne----------------" << endl;
   cout << "matrice test1 : " << sommeLigne(test1) << endl;
   cout << "matrice test2 : " << sommeLigne(test2) << endl;
   cout << "matrice test3 : " << sommeLigne(test3) << endl;

   //Test de sommeColonne
   cout << "-----------Somme Colonne----------------" << endl;
   cout << "matrice test1 : " << sommeColonne(test1) << endl;
   cout << "matrice test2 : " << sommeColonne(test2) << endl;
   cout << "matrice test3 : " << sommeColonne(test3) << endl;

   //Test de vectSommeMin
   cout << "-----------Somme min----------------" << endl;
   cout << "matrice test1 : " << vectSommeMin(test1) << endl;
   cout << "matrice test2 : " << vectSommeMin(test2) << endl;
   cout << "matrice test3 : " << vectSommeMin(test3) << endl;

   //Test shuffle
   cout << "-----------Shuffle----------------" << endl;
   shuffleMatrice(test1);
   shuffleMatrice(test2);
   shuffleMatrice(test3);
   cout << "matrice test1 : " << test1  << endl;
   cout << "matrice test2 : " << test2  << endl;
   cout << "matrice test3 : " << test3  << endl;

   //Test sort
   cout << "-----------Sort----------------" << endl;
   sortMatrice(test1);
   sortMatrice(test2);
   sortMatrice(test3);
   cout << "matrice test1 : " << test1  << endl;
   cout << "matrice test2 : " << test2  << endl;
   cout << "matrice test3 : " << test3  << endl;


   // fin de programme
   cout << "Presser ENTER pour quitter";
   cin.ignore(numeric_limits<streamsize>::max(), '\n');
   return EXIT_SUCCESS;
}