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

#include "Camera.h"




Camera::Camera() { id = 1; }

Camera::Camera(int adr){
    id = adr;
}



void Camera::moove(IKeyboard& keyboard, ISerial& serial)
{   
/*
    keyPressed prend par defaut 'O', ce qui envoie la commande 'STOP' a la camera.

    Les autres case ont les différentes commandes de mouvement. Si une des touches concerne est pressee,
    keyPressed change de valeur et ne contient plus 'O'. La commande STOP n'est donc plus envoyee


*/
    char keyPressed ='O';
    keyPressed = keyboard.readKey();
    switch (keyPressed) {
    case 'Z': serial.send_to_camera(ViscaCommand(id,'Z')); break;
    case 'Q': serial.send_to_camera(ViscaCommand(id,'Q')); break;
    case 'S': serial.send_to_camera(ViscaCommand(id,'S')); break;
    case 'D': serial.send_to_camera(ViscaCommand(id,'D')); break;
    case 'O' : serial.send_to_camera(ViscaCommand(id,'O')); break;
    }

}


