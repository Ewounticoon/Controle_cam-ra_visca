//--------------------------------------------------------------
//
// Projet : Camera EVI - D70P
//
// Partie : Commune PC et Arduino (Communication serie)
//
// Auteurs : Ewen GIRAUD-CARRIER
//           Pierre GAUDET
//           Enzo BOISSENIN
//
// Derniere modification : 01/11/2023
//
//---------------------------------------------------------------
#pragma once

class ISerial {
public:
	virtual void send_to_camera(const char* command) = 0; //Envoi de la commande a la camera
	virtual void initSerialCamera() = 0;
};