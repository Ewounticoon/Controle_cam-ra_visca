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
#include "main.h"

//Partie s'executant si le logiciel est lance sur Arduino :
#ifdef ARDUINO_BUILD
KeyboardArduino Keyboard(46,48,50,52); // Broche : Bas, Gauche, Droite, Haut

SerialArduino SerialPort;

//Partie s'executant si le logiciel est lance sur PC :
#elif PC_BUILD

KeyboardPC Keyboard;
SerialPc SerialPort("\\\\.\\COM10"); //Veuillez entrer le port ce cette manière \\\\.\\COMx

#endif
Camera Cam(1);


void InitComposant() { //Initialisation des composants
    SerialPort.initSerialCamera();
    Keyboard.initKeyboard();
}

void oneIteration() {

    Cam.moove(Keyboard, SerialPort);
}








