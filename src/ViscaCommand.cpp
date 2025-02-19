//--------------------------------------------------------------
//
// Projet : Camera EVI - D70P
//
// Partie : Commune PC et Arduino (Commandes)
//
// Auteurs : Ewen GIRAUD-CARRIER
//           Pierre GAUDET
//           Enzo BOISSENIN
//
// Derniere modification : 01/11/2023
//
//---------------------------------------------------------------

#include "ViscaCommand.h"


// Definition des elements specifiques aux commandes
#define END_MSG 0xFF
#define MOVE_CMD 0x06
#define HEADER 0x80
#define CMD_VAL 0x01
#define INQ_VAL 0x09
#define PAN_SPEED 0x10
#define TILT_SPEED 0x10





const char* ViscaCommand(int id, char Selec) {
 
    static char command[9];  // Tableau pour stocker la commande

    // Composez la commande en fonction de 'id' et 'Selec'
    command[0] = HEADER + id;
    command[1] = CMD_VAL;
    command[2] = MOVE_CMD;
    command[3] = CMD_VAL;
    command[4] = PAN_SPEED;
    command[5] = TILT_SPEED;

    switch (Selec) {
    case 'Z':
        command[6] = 0x03;
        command[7] = 0x02;
        break;
    case 'S':
        command[6] = 0x03;
        command[7] = 0x01;
        break;
    case 'Q':
        command[6] = 0x01;
        command[7] = 0x03;
        break;
    case 'D':
        command[6] = 0x02;
        command[7] = 0x03;
        break;
    case 'O' :
        command[6] = 0x03;
        command[7] = 0x03;
    }

        command[8] = END_MSG;

       
        return command;
    
}
