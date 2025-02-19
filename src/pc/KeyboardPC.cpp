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

//Classe et librairie utilisees
#include <Windows.h>
#include "KeyboardPC.h"

using namespace std;


char KeyboardPC::readKey() {




    char key = 'O';  // Par defaut, si aucune touche n'est pressee

    if (GetAsyncKeyState('Z') & 0x8000) {
        std::cout << "Haut" << std::endl;
        return key = 'Z';
    }
    else if (GetAsyncKeyState('Q') & 0x8000) {
        std::cout << "Gauche" << std::endl;
        return key = 'Q';
    }
    else if (GetAsyncKeyState('S') & 0x8000) {
        std::cout << "Bas" << std::endl;
        return key = 'S';
    }
    else if (GetAsyncKeyState('D') & 0x8000) {
        std::cout << "Droite" << std::endl;
        return key = 'D';
    }
    else { return key = 'O'; }
    

}

void KeyboardPC::initKeyboard(){}
