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
 * liste le contenu du vecteur et l'affiche
 * @param os opérateur de flux
 * @param v vecteur a afficher
 * @return
 */
std::ostream& operator<<(std::ostream& os, const Vecteur& v);

/**
 * liste le contenu d'une matrice et l'affiche
 * @param os opérateur de flux
 * @param m Matrice a afficher
 * @return
 */
std::ostream& operator<<(std::ostream& os, const Matrice& m);

/**
 * Vérifie si une matrice est régulière
 * @param m Matrice a vérifier
 * @return Booléen qui vaut true si la matrice est régulière
 */
bool estReguliere(const Matrice& m);

/**
 * Retourne la taille du vecteur le plus petit
 * @param m matrice a vérifier
 * @return Taille du vecteur le plus petit
 */
size_t minCol(const Matrice& m);

/**
 * Permet de vérifier si la matrice est carrer
 * @param m Matrice a vérifier
 * @return Booléen qui vaut true si la matrice est carrée
 */
bool estCarree(const Matrice& m);

/**
 * Fait la somme de chaque ligne de la matrice
 * @param m
 * @return un vecteur contenant la somme de chaque ligne de la matrice
 */
std::vector<type> sommeLigne(const Matrice& m);

/**
 * Fait la somme de chaque colonne d'une matrice
 * @param m matrice a faire la somme
 * @return vecteur contenant a la somme de chaque colonne
 */
std::vector<type> sommeColonne(const Matrice& m);

/**
 * trouve le vecteur d’une matrice dont la somme des valeurs
 * est la plus faible.
 * @param m Matrice a fouiller
 * @return un vecteur qui contient la ligne la plus petite
 */
std::vector<type> vectSommeMin(const Matrice& m);

/**
 * Modifie l'ordre de chaque ligne aléatoirement basé sur l'heure
 * @param m matrice a modifier
 */
void shuffleMatrice(Matrice& m);

/**
 * Trie  une matrice en mettant les lignes ayant les valeurs les plus petites en
 * premiers
 * @param m matrice a trier
 */
void sortMatrice(Matrice& m);

#endif //HEIGVD_PRG1_VECTEURMATRICE_CALCULMATRICIEL_H
