//--------------------------------------------------------------
//
// Projet : Camera EVI - D70P
//
// Partie : Arduino
//
// Auteurs : Ewen GIRAUD-CARRIER
//           Pierre GAUDET
//           Enzo BOISSENIN
//
// Derniere modification : 01/11/2023
//
//---------------------------------------------------------------

#pragma once

#include "../IKeyboard.h"
#include <Arduino.h>


class KeyboardArduino : public IKeyboard{
private:

	int Pin1;
	int Pin2;
	int Pin3;
	int Pin4;

public:
	KeyboardArduino(int pin1, int pin2, int pin3, int pin4);
	void initKeyboard();
	char readKey();
};