//--------------------------------------------------------------
//
// Projet : Camera EVI - D70P
//
// Partie : PC
//
// Auteurs : Ewen GIRAUD-CARRIER
//           Pierre GAUDET
//           Enzo BOISSENIN
//
// Derniere modification : 01/11/2023
//
//---------------------------------------------------------------


// Classe et librairie utilisees
#include "../main.h"
#include <iostream>



int main(void) {
    InitComposant();
    std::cout << "Compile sous PC" << std::endl; //Affiche que la compilation se lance correctement pour la partie PC
    while (true) {
        oneIteration();
    }
}

