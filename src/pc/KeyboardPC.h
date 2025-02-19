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

#pragma once

//Classe et librairie utilisees
#include "../IKeyboard.h"
#include <iostream>

class KeyboardPC : public IKeyboard
{
public:
	char readKey();
	void initKeyboard();
};

