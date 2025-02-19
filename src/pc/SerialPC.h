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

#include "../ISerial.h"


class SerialPc : public ISerial {
	const char* com;
public:
	SerialPc(const char* COM);
	void send_to_camera(const char* command);
	void initSerialCamera();
};