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

#ifdef ARDUINO_BUILD

#include "SerialArduino.h"


void SerialArduino::send_to_camera(const char* command)
{	
		Serial1.write(command);	//Utilisation de 'Serial1' pour Arduino Mega
}


void SerialArduino::initSerialCamera()
{
	Serial1.begin(9600); //Ouverture de la communication serie avec une vitesse definie (ici 9600)
}
#endif