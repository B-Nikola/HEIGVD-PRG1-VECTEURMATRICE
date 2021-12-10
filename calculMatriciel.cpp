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
#include <chrono>
#include <random>
#include "calculMatriciel.h"

using namespace std;



bool plusPetit(const Vecteur& a,const Vecteur& b);
bool plusGrand(const Vecteur& a,const Vecteur& b);


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
   if (!(m.empty()))
   {
      return ( min_element(m.begin(),m.end(), plusPetit)->size() ==
               max_element(m.begin(),m.end(), plusGrand)->size());
   }
   return true;
}

bool plusGrand(const Vecteur& a,const Vecteur& b)
{
   return (a.size()>b.size());
}

size_t minCol(const Matrice& m){
   if (!(m.empty()))
   {
      return min_element(m.begin(),m.end(), plusPetit)->size();
   }
   return 0;
}

bool plusPetit(const Vecteur& a,const Vecteur& b)
{
   return (a.size()<b.size());
}


bool estCarree(const Matrice& m){
   if (estReguliere(m))
   {
      return (m.size() == m[0].size());
   }
   return true;
}

/**
 *
 * @param v
 * @return
 */
int sommeElementLigne(Vecteur v){
   type sommeElement = accumulate(v.begin(), v.end(), 0);

   return sommeElement;
}

Vecteur sommeLigne(const Matrice& m){
   Vecteur somme(m.size());

   transform(m.begin(), m.end(), somme.begin(), sommeElementLigne);

   return somme;
}

int sommeElementCol(Vecteur v){

   type sommeElement = accumulate(v.begin(), v.begin() + 1 , 0);
   //type sommeCol = copy(v.begin(), v.begin() + 1, somme.begin())

   return sommeElement;

}

Vecteur sommeColonne(const Matrice& m){
   Vecteur somme;
   const size_t TAILLE = m.size();

   transform(m.begin(), m.begin(), somme.begin(), sommeElementCol);


   return somme;
}

/*

Vecteur sommeSommeMin(const Matrice& m){

}*/


void shuffleMatrice(Matrice& m){
   unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
   shuffle(m.begin(), m.end(), default_random_engine(seed));

}
/*
void sortMatrice(Matrice& m){

}
*/