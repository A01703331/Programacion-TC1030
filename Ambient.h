/** 
 * Jose Sebastian Pedrero Jimenez
 * A01703331
 * 11/Junio/2021
*/

#ifndef AMBIENT_H_
#define AMBIENT_H_

#include "Account.h"

#include <iostream>
using namespace std;

//Declaracion de clase Ambiente
class Ambiente {
	//Variables de instancia
	protected:
		int meseta;
		string char_class;
		int level;
		Cuenta * accs[2000]; // Cuentas que inician sesion al servidor
		int cid
	public:
		//Default
		Ambiente(): meseta(0),char_class("Hunter"),level(1){};
		//Constructor
		Ambiente(int m,string c,int lv):
		  meseta(m),char_class(c),level(lv){};
		void addMoney(int);
		void payMoney(int);
		void addAccounts();
		virtual void changeClass(Cuenta, string);
		void addLv();
        virtual void logIn()=0;
        virtual string print()=0;
};

void Ambiente::addMoney(int m){
	meseta = meseta + m;
};

void Ambiente::payMoney(int m){
	meseta = meseta - m;
};

void Ambiente::addAccounts(Cuenta *C){
	accs[cid]  = C;
};

void Ambiente::changeClass(Cuenta *C, string cl){
    for (i=0; i<2000; i++)
        if (accs[i] == C)
        	accs[i] -> changeClass(cl);
};

void Ambiente::addLv(){
	level++;
};

#endif
