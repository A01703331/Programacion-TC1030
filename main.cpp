/*
 * Jose Sebastian Pedrero Jimenez
 * A01703331
 * 11/Junio/2021
*/

#include "PSO2.h" 
#include "NGS.h"
// Clases donde se encuentran todos los objetos incluidos de todas las clases

#include <iostream>
using namespace std;

int main(){
    string name, cname, cclass; // Variables para hacer input de creacion
    int amb, ccreate=0; // Variables para hacer input de creacion
    Ambiente *game[2]; // Arreglo de apuntadores de Ambientes de juego
    Cuenta *ptrdummy; //Apuntador de clase Cuenta
    game[0] = new PSO2();
    game[1] = new NGS();
    cout << "Nombre de la cuenta" << endl;
    cin >> name;
    Cuenta dummy(name,false,0,0,0);
    ptrdummy = &dummy;
    while (ccreate == 0) {   
        cout << "Tienes un personaje? 0 - No // 1 - Si" << endl;
        cin >> ccreate;
        if (ccreate == 0){
            cout << "Crearemos un personaje" << endl;
            cout << "Nombre del personaje" << endl;
            cin >> cname;
            cout << "Clase del personaje" << endl;
            cin >> cclass;
            dummy.addChars(cname, cclass);
        }
        else if (ccreate == 1){
            cout << "Nombre del personaje (exactamente igual):" << endl;
            cin >> cname;
            dummy.chooseChar(cname);
        }
        else
            cout << "Por favor elige una opcion de las dos" << endl;
            ccreate = 0;
    };
    while (amb == 0) { 
        cout << "En que ambiente quieres jugar? 0 - PSO2 // 1 - NGS" << endl;
        cin >> amb;
        if (amb == 0){
            game[0]->addAccounts(ptrdummy);
            game[0]->logIn(ptrdummy);
        }
        else if (amb == 1){
            game[1]->addAccounts(ptrdummy);
            game[1]->logIn(ptrdummy);
        }
        else {
            cout << "Tal vez en el futuro haya mas, por ahora no" << endl;
            amb = 0;
        };
    };
};
