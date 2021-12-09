/*
-----------------------------------------------------------------------------------
Nom du fichier : main.cpp
Nom du Labo :
Auteur(s) : Bouattit Nikola Delétraz Alexandre
Date creation : 08.12.2021
Description : Libraire de fonctions permettant d'effectuer des opérations sur des
              matrices. Avec cette librairie il est possible de :

              -déterminé si une matrice est carrée, c'est-à-dire que le nombre de
               colonne de chaque ligne est égale au nombre total de ligne.
              -
Remarque(s) : <TODO>
Compilateur : Mingw-w64 g++ 11.2.0
-----------------------------------------------------------------------------------
*/

#include <numeric>
#include <algorithm>
#include "calculMatriciel.h"

using namespace std;

ostream& operator<<(ostream& os, const Vecteur& v){
   os << "[";
   for (size_t i=0; i<v.size(); ++i) {
      if (i)
         os << ", ";
      os << v[i];
   }

   os << "]";
   return os;
}

ostream& operator<<(ostream& os, const Matrice& m){
   if (m.empty())
      cout << "[]";
   for (size_t i=0; i<m.size(); ++i) {
      os << m[i] << endl;
   }
   return os;
}

bool estReguliere(const Matrice& m){

}

int minCol(const Matrice& m){

}
bool estCarree(const Matrice& m){

}

/**
 *
 * @param v
 * @return
 */
int sommeElement(Vecteur v){
   type sommeElement = accumulate(v.begin(), v.end(), 0);

   return sommeElement;
}

Vecteur sommeLigne(const Matrice& m){
   Vecteur somme(m.size());

   transform(m.begin(), m.end(), somme.begin(), sommeElement);

   return somme;
}

Vecteur sommeColonne(const Matrice& m){
   Vecteur somme;
   const size_t TAILLE = m.size();

   return somme;
}

Vecteur sommeSommeMin(const Matrice& m){

}

void shuffleMatrice(Matrice& m){

}

void sortMatrice(Matrice& m){

}
