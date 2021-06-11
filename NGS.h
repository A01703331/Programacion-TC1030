/** 
 * Jos� Sebasti�n Pedrero Jim�nez
 * A01703331
 * 11/Junio/2021
*/

#ifndef NGS_H_
#define NGS_H_

#include "Ambient.h"

#include <iostream>
using namespace std;

//Declaracion de clase AmbienteNGS, que hereda de AmbientePSO2
class NGS:public Ambiente {
	//Variables de instancia
	private:
		int battle_power;
		string mots[1000];
		string pr;
	public:
		//Default
		NGS():Ambiente(),battle_power(0){};
		//Constructor
		NGS(int m,string c,int lv, int bp):
		  Ambiente(m,c,lv),battle_power(bp){};
		void calculateBattlePower();
		void logIn(Cuenta*);
		void print();
};

void NGS::calculateBattlePower(){
	battle_power = (level * 50) + 50;
};

void NGS::logIn(Cuenta *C){
	C->addLog("dia de hoy","horas que sean actualmente.");
    pr = "Bienvenido, "+C->getName()+" a PSO2!";
};

void NGS::print(){
	cout << pr;
};

#endif
