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
		int pl, AC, SG, FUN; // Dias que restan a premium, y divisas
		Personaje * characters[20]; // Arreglo que guarda los personajes
		Personaje *current_char;
	public:
		//Default
		Cuenta():
		  name("PNXXXXXXX"),premium(false),AC(0),SG(0),FUN(0){};
		//Constructor
		Cuenta(string n, bool p, int a, int s, int f):
		  name(n),premium(p),AC(a),SG(s),FUN(f){};
		void setName(string);
		string getName();
		void addLog(string date, string hour);
		void premiumStatus();
		void addCurrency(int a, int s, int f);
		void payCurrency(int a, int s, int f);
		Personaje chooseChar(string cn);
		void changeClass(string c);
		void logInPSO2();
		void logInNGS();
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
	cout << "Se ha iniciado sesion el " << date << "a las " << hour;
};
/*Agrega un registro de inicio de sesion
 *
 *@param hora y fecha del inicio de sesion
 *@return entrada nueva del registro
*/

void Cuenta::premiumStatus(){
	if (pl > 0)
		premium = true
		cout << "Quedan " << pl << " dias de premium";
	else 
		premium = false
		cout << "Premium no esta activado"
};

void Cuenta::payCurrency(int a, int s, int f){
	AC = AC - a;
	SG = SG - s;
	FUN = FUN - f;
};

void Cuenta::addCurrency(int a, int s, int f){
	AC = AC + a;
	SG = SG + s;
	FUN = FUN + f;
};

Personaje Cuenta::chooseChar(string cn){
	for (int = 0; i < 19;i++)
		if (cn == characters[i] -> getName())
			current_char = characters[i]
			cout << cn < " ha sido seleccionado";
			return current_char
	cout << "No se ha encontrado al personaje deseado";
};

void Cuenta::changeClass(string c){
	current_char.setClass(c);
};

void Cuenta::logInPSO2(){

};

void Cuenta::logInNGS(){

};

#endif
