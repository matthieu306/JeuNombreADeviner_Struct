/*************************************************/
// Nom du projet: Jeu du nombre à deviner
// Nom du fichier: MainJeuNombreAdeviner.cpp
// Version : 1.0
// Nom du programmeur: MP Pinaud
// Date de création : 25/01/2021
// Rôle du fichier: Contient le code jeu
// Nom des composants utilises: JeuNombreADeviner.h
//                              iostream
// Historique du fichier:
/*************************************************/
#include <iostream>
using namespace std;

#include "../include/JeuNombreADeviner.h"

int main()
{
    string un_nom;
    TJoueur joueurAcreer;
    cout << "Quel est votre nom ?" << endl;
    cin >> un_nom;
    cout << "Quel est le nombre mistere ? il est entre 1 & 10 !" << endl;
    InitJoueur(joueurAcreer, un_nom);
    JouerPartie(joueurAcreer, TirerNombreMystere());
    MajResultatsJoueur(joueurAcreer, joueurAcreer.nbTentatives, joueurAcreer.nbPartiesGagnees);
    ResultatsJoueur(joueurAcreer, joueurAcreer.nbPartiesGagnees, joueurAcreer.nbPartiesPerdues, joueurAcreer.nbTentatives);
    cout << "Tu as gagne en " << joueurAcreer.nbTentatives << " tentatives, tu as reussi " << joueurAcreer.nbPartiesGagnees << " parties, et tu as perdu " << joueurAcreer.nbPartiesPerdues << " parties.";
    return 0;
}
