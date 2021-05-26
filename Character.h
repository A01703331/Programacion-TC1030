/** 
 * José Sebastián Pedrero Jiménez
 * A01703331
 * 11/Junio/2021
*/

#ifndef CHARACTER_H_
#define CHARACTER_H_

#include "Accesory.h"

#include <iostream>
using namespace std;

//Declaracion de clase Personaje
class Personaje {
	//Variables de instancia
	private:
		string char_name; // Nombre del personaje
		string char_class; // Clase del personaje
		Accesorios * phasion[500]; // Arreglo para guardar los accesorios desbloqueados
	public:
		//Default
		Personaje():char_name("Ash"){};
		//Constructor
		Personaje(string cn):
		  char_name(cn){};
		void setCharName(string);
		string getCharName();
		void setClass(string c);
};

#endif
