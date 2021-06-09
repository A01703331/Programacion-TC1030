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
class Mociones {
	//Variables de instancia
	private:
		int id, unlock;
		string mname;
	public:
		Mociones():id(001),unlock(0),mname(""){};
		Mociones(int mid, int u, string mn):
		  id(mid),unlock(u),mname(mn){};
		void unlockChange();
		string getMtnName();
};

void Mociones::unlockChange(){
	if (unlock == 0)
		unlock++;
	else
		cout << "Esta mocion ya esta desbloqueada" << endl;
};

string Mociones::getMtnName(){
	return mname;
};

#endif
