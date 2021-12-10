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

#ifndef HEIGVD_PRG1_VECTEURMATRICE_CALCULMATRICIEL_H
#define HEIGVD_PRG1_VECTEURMATRICE_CALCULMATRICIEL_H

#include <iostream>
#include <vector>

//--------------------------------------------------------------
//alias de types pour les vecteurs et les matrices
using type    = int;
using Vecteur = std::vector<type>;
using Matrice = std::vector<Vecteur>;

/**
 *
 * @param os
 * @param v
 * @return
 */
std::ostream& operator<<(std::ostream& os, const Vecteur& v);

/**
 *
 * @param os
 * @param m
 * @return
 */
std::ostream& operator<<(std::ostream& os, const Matrice& m);

/**
 *
 * @param m
 * @return
 */
bool estReguliere(const Matrice& m);

/**
 *
 * @param m
 * @return
 */
size_t minCol(const Matrice& m);

/**
 *
 * @param m
 * @return
 */
bool estCarree(const Matrice& m);

/**
 *
 * @param m
 * @return
 */
std::vector<type> sommeLigne(const Matrice& m);

/**
 *
 * @param m
 * @return
 */
std::vector<type> sommeColonne(const Matrice& m);

/**
 *
 * @param m
 * @return
 */
std::vector<type> vectSommeMin(const Matrice& m);

/**
 *
 * @param m
 */
void shuffleMatrice(Matrice& m);

/**
 *
 * @param m
 */
void sortMatrice(Matrice& m);

#endif //HEIGVD_PRG1_VECTEURMATRICE_CALCULMATRICIEL_H
