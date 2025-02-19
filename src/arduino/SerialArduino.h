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

//Inclusion des classes et librairie utilisees :
#include "../ISerial.h"
#include "../Camera.h"
#include <Arduino.h>


class SerialArduino : public ISerial {

public:

	void send_to_camera(const char* command);
	void initSerialCamera();
};