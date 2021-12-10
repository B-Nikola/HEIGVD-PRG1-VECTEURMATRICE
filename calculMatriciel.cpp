/*
-----------------------------------------------------------------------------------
Nom du fichier : main.cpp
Nom du Labo :
Auteur(s) : Bouattit Nikola Delétraz Alexandre
Date creation : 08.12.2021
Description : Libraire de fonctions permettant d'effectuer des opérations sur des
              matrices. Avec cette librairie il est possible de :

              -déterminer si une matrice est carrée, c'est-à-dire que le nombre de
               colonne de chaque ligne est égale au nombre total de ligne.
              -déterminer si une matrice est régulière, c'est-à-dire que tous ces
               vecteurs soit de la même taille.
              -donner la longueur du plus petit vecteur d'une matrice.
              -calculer la somme de chacune des lignes d'une matrice et reporter
               le résultat dans un vecteur.
              -calculer la somme de chaque colonne d'une matrice et reporter le
               résultat dans un vecteur.
              -déterminer parmi les vecteurs d'une matrice lequel à la somme des
               valeurs la plus basse. En cas d'égalité, retourne celui qui à
               l'indice le plus petit.
              -mélanger les vecteurs d'une matrice, sans modifié les vecteurs, de
               manière aléatoire. La seed aléatoire est basée sur l'heure.
              -trier dans l'ordre croissant les vecteur d'une matrice en fonction
               de l'élément le plus petit d'un vecteur.
Remarque(s) : <TODO>
Compilateur : Mingw-w64 g++ 11.2.0
-----------------------------------------------------------------------------------
*/

#include <numeric>
#include <algorithm>
#include <chrono>
#include <random>
#include <ctime>
#include "calculMatriciel.h"

using namespace std;

bool taillePlusPetit(const Vecteur& a, const Vecteur& b);
bool valPlusPetite(const Vecteur& a, const Vecteur& b);
bool plusPetitVect(const Vecteur& a, const Vecteur& b);

ostream& operator<<(ostream& os, const Vecteur& v){
   os << "[";

   for (size_t i = 0; i<v.size(); ++i) {
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
   for (size_t i = 0; i<m.size(); ++i) {
      os << m[i] << endl;
   }
   return os;
}

bool estReguliere(const Matrice& m){
   if (!(m.empty()))
   {
      bool test = min_element(m.begin(), m.end(), taillePlusPetit)->size() ==
                  max_element(m.begin(), m.end(), taillePlusPetit)->size();
      return ( test );
   }
   return true;
}

size_t minCol(const Matrice& m){
   if (!(m.empty()))
   {
      return min_element(m.begin(), m.end(), taillePlusPetit)->size();
   }
   return 0;
}

bool taillePlusPetit(const Vecteur& a, const Vecteur& b)
{
   return (a.size() < b.size());
}


bool estCarree(const Matrice& m){
  // if (!(m.empty())){
      if (estReguliere(m))
      {
         return (m.size() == m[0].size());
      }
  // }
  // else if(m.empty()){
  //    return true;
  // }
  // else
   return false;
}

/**
 *
 * @param v un vecteur
 * @return la somme des éléments du vecteur reçu en paramètre dans un int.
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
   for (size_t i = 0; i < m.size(); ++i){
      transform(m.begin(), m.end(), somme.begin(), sommeElementCol);
   }

   return somme;
}

Vecteur vectSommeMin(const Matrice& m){

   return *min_element(m.begin(),m.end(), valPlusPetite);
}

/**
 *
 * @param a un vecteur
 * @param b un autre vecteur
 * @return retour un booléen qui vaut true si la somme des éléments du premier
 *         vecteur est plus petite que la somme des éléments du deuxième vecteur.
 */

bool valPlusPetite(const Vecteur& a, const Vecteur& b){
   return sommeElementLigne(a) < sommeElementLigne(b);
}

void sortMatrice(Matrice& m) {
   sort(m.begin(), m.end(), plusPetitVect);

}

void shuffleMatrice(Matrice& m){
   unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
   shuffle(m.begin(), m.end(), default_random_engine(seed));
}

/**
 *
 * @param a un vecteur
 * @param b un autre vecteur
 * @return un booléen qui vaut true si le premier vecteur est plus petit que le
 * deuxième.
 */
bool plusPetitVect(const Vecteur& a, const Vecteur& b){

   int test  = *min_element(a.begin(),a.end());
   int test2 = *min_element(b.begin(),b.end());

   return (*min_element(a.begin(),a.end()) < *min_element(b.begin(),b.end()));
}

