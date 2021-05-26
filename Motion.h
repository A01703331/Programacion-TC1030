/* 
 * Jose Sebastian Pedrero Jimenez
 * A01703331
 * 11/Junio/2021
*/

#ifndef MOTION_H_
#define MOTION_H_

#include <iostream>
using namespace std;

//Declaracion de clase Mociones
class Mocion {
	//Variables de instancia
	private:
		int id, unlock;
	public:
		void unlockChange();
};

void Mocion::unlockChange(){
	if (unlock == 0)
		unlock++;
	else
		cout << "Ya esta desbloqueado para toda la cuenta" << endl;
};

#endif
