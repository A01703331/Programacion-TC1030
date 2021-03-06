/** 
 * Jos� Sebasti�n Pedrero Jim�nez
 * A01703331
 * 11/Junio/2021
*/

#ifndef CHARACTER_H_
#define CHARACTER_H_

#include <iostream>
using namespace std;

//Declaracion de clase Personaje
class Personaje {
	//Variables de instancia
	private:
		string char_name; // Nombre del personaje
		string char_class; // Clase del personaje
		string phashion[500]; // Arreglo para guardar accesorios
		int asid=0; // Navegador del arreglo phashion para addAccesories
	public:
		//Default
		Personaje():char_name("Ash"),char_class("Hunter"){};
		//Constructor
		Personaje(string cn, string cc):char_name(cn),char_class(cc){};
		void setCharName(string);
		string getCharName();
		void setClass(string);
		string getClass();
		void addAccesories(string);
};

void Personaje::setCharName(string n){
	char_name = n;
};

string Personaje::getCharName(){
	return char_name;
};

void Personaje::setClass(string c){
	char_class = c;
};

string Personaje::getClass(){
	return char_class;
};

void Personaje::addAccesories(string A){
	phashion[asid] = A;
	asid++;
}

#endif
