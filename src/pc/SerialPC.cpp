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

// Classes et librairies utilisees :
#include <iostream>
#include "SerialPC.h"
#include "serialib.h"
#include <string>

// Definition de la communication serie
//#define SERIAL_PORT "\\\\.\\COM1"   //Selection du port COM : ecrire \\\\.\\COMx
#define BAUD_RATE 9600

SerialPc::SerialPc(const char *COM):com(COM){}

void SerialPc::send_to_camera(const char *command)
{

    serialib serial;

    serial.openDevice(com, BAUD_RATE); //Ouvre la connection serie


    if (serial.isDeviceOpen()) { // Permet de verifier si la connection serie a bien ete ouverte
         //writeString renvoie -1 si operation echouee et 1 si operation reussi
        int envoie = serial.writeString(command);
        if (envoie == -1) {
            std::cerr << "Erreur lors de l'envoi de la commande." << std::endl;
        }
        else {
            std::cout << "Commande envoyee avec succes." << std::endl;
        }
        serial.closeDevice();
    }
    else {
        std::cerr << "Erreur lors de l'ouverture de la communication serie." << std::endl;
    }
}

void SerialPc::initSerialCamera(){}

