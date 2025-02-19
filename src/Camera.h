//--------------------------------------------------------------
//
// Projet : Camera EVI - D70P
//
// Partie : Commune PC et Arduino (Camera)
//
// Auteurs : Ewen GIRAUD-CARRIER
//           Pierre GAUDET
//           Enzo BOISSENIN
//
// Derniere modification : 01/11/2023
//
//---------------------------------------------------------------

#pragma once

// Inclusion des classes utilisees
#include "IKeyboard.h"
#include "ISerial.h"
#include "ViscaCommand.h"

class Camera {
private:
	int id;

public:
	Camera();
	Camera(int adr);
	void moove(IKeyboard& keyboard, ISerial& serial);
};

