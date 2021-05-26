/** 
 * José Sebastián Pedrero Jiménez
 * A01703331
 * 11/Junio/2021
*/

#ifndef NGS_H_
#define NGS_H_

#include "PSO2.h"
#include "Motion.h"

#include <iostream>
using namespace std;

//Declaracion de clase AmbienteNGS, que hereda de AmbientePSO2
class AmbienteNGS:public AmbientePSO2 {
	//Variables de instancia
	private:
		int battle_power;
		Mocion * mots[1000];
	public:
		//Default
		AmbienteNGS():AmbientePSO2(),battle_power(0){};
		//Constructor
		AmbienteNGS(int m,string c,int lv, int bp):
		  AmbientePSO2(m,c,lv),battle_power(bp){};
		void calculateBattlePower();
};

#endif
