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

#include "KeyboardArduino.h"


KeyboardArduino::KeyboardArduino(int pin1, int pin2, int pin3, int pin4) : Pin1(pin1), Pin2(pin2), Pin3(pin3), Pin4(pin4)
{
}

/*
	>Definition des pins de l'Arduino concernés en mode INPUT (lecture)
	>Affichage si l'initialisation est concluente
*/
void KeyboardArduino::initKeyboard() { 

	pinMode(Pin1, INPUT);
	pinMode(Pin2, INPUT);
	pinMode(Pin3, INPUT);
	pinMode(Pin4, INPUT);
	Serial.print("Bouton Initialiser");
}


char KeyboardArduino::readKey() {

	char key = 'O';
	if (digitalRead(Pin1) == LOW) {

		Serial.print("BAS");
		delay(1000);
		return key='S';  // Vous pouvez retourner une valeur specifique pour le bouton 1

	}
	else if (digitalRead(Pin2) == LOW) {
		delay(1000);
		Serial.print("GAUCHE");
		return key='Q';  // Vous pouvez retourner une valeur specifique pour le bouton 2



	}
	else if (digitalRead(Pin3) == LOW) {
		Serial.print("DROIT");
		delay(1000);
		return key='D';  // Vous pouvez retourner une valeur specifique pour le bouton 3


	}
	else if (digitalRead(Pin4) == LOW) {
		Serial.print("HAUT");
		delay(1000);
		return key='Z';  // Vous pouvez retourner une valeur specifique pour le bouton 4



	}
	else { return key='O'; }

}




#endif