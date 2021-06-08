/** 
 * Jos� Sebasti�n Pedrero Jim�nez
 * A01703331
 * 11/Junio/2021
*/

#ifndef NGS_H_
#define NGS_H_

#include "Ambient.h"
#include "Motion.h"

#include <iostream>
using namespace std;

//Declaracion de clase AmbienteNGS, que hereda de AmbientePSO2
class NGS:public Ambiente {
	//Variables de instancia
	private:
		int battle_power;
		Mociones * mots[1000];
		string pr;
	public:
		//Default
		NGS():Ambiente(),battle_power(0){};
		//Constructor
		NGS(int m,string c,int lv, int bp):
		  Ambiente(m,c,lv),battle_power(bp){};
		void calculateBattlePower();
		void logIn(Cuenta);
		void print();
};

void NGS::calculateBattlePower(){
	bp = (NGS.level * 50) + 50;
};

string NGS::logIn(Cuenta *C){
    pr = "Bienvenido, "+C->getName()+" a PSO2!";
	return pr
};

void NGS::print(){
	cout << pr;
}

#endif
