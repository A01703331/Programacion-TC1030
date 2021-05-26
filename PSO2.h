/** 
 * José Sebastián Pedrero Jiménez
 * A01703331
 * 11/Junio/2021
*/

#ifndef PSO2_H_
#define PSO2_H_

#include "Account.h"

#include <iostream>
using namespace std;

//Declaracion de clase AmbientePSO2
class AmbientePSO2 {
	//Variables de instancia
	protected:
		int meseta;
		string char_class;
		int level;
		Cuenta * accs[2000]; // Cuentas que inician sesion al servidor
	public:
		//Default
		AmbientePSO2(): meseta(0),char_class("Hunter"),level(1){};
		//Constructor
		AmbientePSO2(int m,string c,int lv):
		  meseta(m),char_class(c),level(lv){};
		void addMoney(int m);
		void payMoney(int m);
		void changeClass(string c);
		void addLv();
};

void AmbientePSO2::addMoney(int m){
	meseta = meseta + m;
};

void AmbientePSO2::payMoney(int m){
	meseta = meseta - m;
};

void AmbientePSO2::changeClass(string c){
	char_class = c;
};

void AmbientePSO2::addLv(){
	level++;
};

#endif
