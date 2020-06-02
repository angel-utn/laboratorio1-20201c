/**
    Resuelto hasta puntos 1 y 2. Pendientes de resolver 3 y 4.
*/
#include <iostream>
using namespace std;

int main(){
    int nro, dia, cant;
    /// Punto A
    int vPuntoA[10] = {};
    /// Punto B
    bool vPuntoB[7] = {};

    cout << "Número de trabajador: ";
    cin >> nro;
    while(nro >= 1 && nro <= 10){
        cout << "Número de día: ";
        cin >> dia;
        cout << "Cantidad: ";
        cin >> cant;
        cout << endl;
        ///Punto A
        vPuntoA[nro - 1] += cant;
        ///Punto B
        vPuntoB[dia - 1] = true;

        cout << "Número de trabajador: ";
        cin >> nro;
    }
    system("clear"); ///system("cls") en Windows
    cout << "Punto 1" << endl;
    cout << "--------------------------" << endl;
    int i;
    for(i=0; i<10; i++){
        if (vPuntoA[i] > 0){
            cout << "Trabajador " << i+1 << ": ";
            cout << vPuntoA[i] << endl;
        }
    }
    cout << endl;
    cout << "Punto 2: Días en que no trabajó nadie" << endl;
    cout << "--------------------------------------" << endl;
    for(i=0; i<7; i++){
        if (vPuntoB[i] == false){
            cout << i+1 << endl;
        }
    }


    return 0;
}
