/** 
 * Jos� Sebasti�n Pedrero Jim�nez
 * A01703331
 * 11/Junio/2021
*/

#ifndef PSO2_H_
#define PSO2_H_

#include "Ambient.h"

#include <iostream>
using namespace std;

//Declaracion de clase PSO2
class PSO2:public Ambiente {
	//Variables de instancia
	private:
		int fun;
		string pr;
	public:
		//Default
		PSO2():Ambiente(),fun(0){};
		//Constructor
		PSO2(int m,string c,int lv, int f):
		  Ambiente(m, c, lv), fun(f){};
		void addFUN(int f);
		void payFUN(int f);
		void logIn(Cuenta);
		void print();
};

void PSO2::addFUN(int f){
	fun = fun + f;
};

void PSO2::payFUN(int f){
	fun = fun - f;
};

void PSO2::logIn(Cuenta *C){
	pr = "Bienvenido, "+C->getName()+" a New Genesis!";
	return pr;
};

void PSO2::print(){
	cout << pr;
};

#endif
