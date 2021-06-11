/** 
 * Jose Sebastian Pedrero Jimenez
 * A01703331
 * 11/Junio/2021
*/

#ifndef ACCOUNT_H_
#define ACCOUNT_H_

#include "Character.h"

#include <iostream>
using namespace std;

/*Declaracion de clase Cuenta, contiene los datos del usuario que
 *comparten todos sus personajes
*/
class Cuenta {
	//Metodos
	private:
		//Variables de instancia
		string name; //Nombre de la cuenta
		bool premium; //Si tiene premium activado
		int pl, AC, SG; // Dias que restan a premium, y divisas
		Personaje *characters[20]; // Arreglo que guarda los personajes
		Personaje *current_char; // Personaje actual
	public:
		//Default
		Cuenta():
		  name("PNXXXXXXX"),premium(false),pl(0),AC(0),SG(0){};
		//Constructor
		Cuenta(string n, bool p, int pd, int a, int s):
		  name(n),premium(p),pl(pd),AC(a),SG(s){};
		void setName(string);
		string getName();
		void addLog(string date, string hour);
		void premiumStatus();
		void addCurrency(int, int);
		void payCurrency(int, int);
		Personaje *addChars(string, string);
		void chooseChar(string);
		void changeClass(string);
};

void Cuenta::setName(string n){
	name = n;
};
/*Cambia el nombre de la cuenta
 *
 *@param nombre nuevo de la cuenta
 *@return
*/

string Cuenta::getName(){
	return name;
};
/*Regresa el nombre de la cuenta
 *
 *@param
 *@return nombre de la cuenta
*/

void Cuenta::addLog(string date, string hour){
	cout << "Se ha iniciado sesion el " << date << " a las " << hour;
};
/*Agrega un registro de inicio de sesion
 *
 *@param hora y fecha del inicio de sesion
 *@return entrada nueva del registro
*/

void Cuenta::premiumStatus(){
	premium = false;
	if (pl > 0){
		premium = true;
		cout << "Quedan " << pl << " dias de premium";
	}
	else {
		premium = false;
		cout << "Premium no esta activado";
	}
};

void Cuenta::addCurrency(int a, int s){
	AC = AC + a;
	SG = SG + s;
};

void Cuenta::payCurrency(int a, int s){
	AC = AC - a;
	SG = SG - s;
};


Personaje *Cuenta::addChars(string n, string c){
	int i = 0;
	bool flag = false;
	for (int i = 0; i<20; i++){
		if (characters[i] == NULL) {
			characters[i] = new Personaje(n,c);
			cout << characters[i]->getCharName() << " ha sido agregado.";
			cout << endl;
			flag = true;
			return characters[i] = new Personaje(n,c);
		}
	}
	if (flag == false){
		cout << "No se pudo agregar al personaje";
		return characters[i];
	}
	else {
		return characters[i];
	}
};

void Cuenta::chooseChar(string cn){
	bool flag = false;
	for (int i = 0; i<20; i++){
		if (characters[i] != NULL) {
			if ((characters[i]->getCharName()) == cn) {
				current_char = characters[i];
				cout << cn << " ha sido seleccionado";
				flag = true;
				break;
			}
		}
	};
	if (flag == false){
		cout << "No se ha encontrado al personaje deseado";
	};
};

void Cuenta::changeClass(string c){
	current_char->setClass(c);
};

#endif
