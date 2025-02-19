//--------------------------------------------------------------
//
// Projet : Camera EVI - D70P
//
// Partie : Commune PC et Arduino (Main central)
//
// Auteurs : Ewen GIRAUD-CARRIER
//           Pierre GAUDET
//           Enzo BOISSENIN
//
// Derniere modification : 01/11/2023
//
//---------------------------------------------------------------

//Inclure les classes
#include "IKeyboard.h"
#include "ISerial.h"
#include "Camera.h"

// Recherche des fichiers specifiques a ARDUINO :
#ifdef ARDUINO_BUILD
#include "arduino/KeyboardArduino.h"
#include "arduino/SerialArduino.h"

// recherche des fichiers specifiques au PC :
#else
#include "pc/KeyboardPC.h"
#include "pc/SerialPC.h"
#endif



// Déclarations de fonctions
void InitComposant();
void oneIteration();





