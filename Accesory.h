/** 
 * José Sebastián Pedrero Jiménez
 * A01703331
 * 11/Junio/2021
*/

#ifndef ACCESORY_H_
#define ACCESORY_H_

#include <iostream>
using namespace std;

//Declaracion de clase Accesorios
class Accesorios {
	//Variables de instancia
	private:
		int unlock, id;
	public:
		void unlockChange();
};

void Accesorios::unlockChange(){
	if (unlock == 0)
		unlock++;
	else if (unlock == 1)
		unlock++;
	else
		cout << "Ya esta desbloqueado para toda la cuenta" << endl;
};

#endif
