/**
Una empresa de envío de mercadería a domicilio tiene un conjunto de registros con los datos del trabajo realizado durante los días de abril por sus repartidores.

Por cada uno de los repartidores y día trabajado registró lo siguiente
    - Número de repartidor (entero)
    - Día (entero)
    - Cantidad de envíos realizados (entero)
    - Importe total recaudado (float)

Los datos están agrupados por número de repartidor. No se sabe cuántos repartidores trabajaron; los que lo hicieron trabajaron los 30 días del mes. Para indicar el fin de los datos se coloca un número de repartidor igual a 0.

Calcular e informar:
a) Por cada repartidor, el promedio de recaudación entre todos los envíos que realizó
b) El número de repartidor que menos repartos hizo
c) La recaudación de todo el mes.
*/
#include <iostream>
using namespace std;
#include <cstdlib>
int main(){
    system("clear");
    const int DIAS=4;
    int nrep, dia, cant_env, i;
    float rec_dia;
    ///Punto A
    int suma_envios;
    float suma_recaudacion, promedio;
    /// Punto B
    int min_rep, min_envios=-1, rep_envios;
    /// Punto C
    float rec_total = 0;
    cout << "Número de repartidor: ";
    cin >> nrep;
    while(nrep != 0){
        /// Punto A
        suma_envios = 0;
        suma_recaudacion = 0;
        /// Punto B
        rep_envios = 0;
        for(i=1; i<=DIAS; i++){
            cout << "Día: ";
            cin >> dia;
            cout << "Cantidad envíos: ";
            cin >> cant_env;
            cout << "Recaudación: $";
            cin >> rec_dia;
            /// Punto A
            suma_envios += cant_env;
            suma_recaudacion += rec_dia;
            /// Punto B
            rep_envios += cant_env;
            /// Punto C
            rec_total += rec_dia;
        }
        cout << endl << endl;
        cout << "Punto A" << endl;
        promedio = suma_recaudacion/suma_envios;
        cout << "Promedio de recaudación: " << promedio << endl << endl;
        /// Punto B
        if (rep_envios < min_envios || min_envios == -1){
            min_envios = rep_envios;
            min_rep = nrep;
        }
        cout << "-------------------------" << endl;
        cout << "Número de repartidor: ";
        cin >> nrep;
    }
    cout << endl << endl;
    cout << "PUNTO B: " << endl;
    cout << "Repartidor: " << min_rep << endl << endl;

    cout << "PUNTO C: " << endl;
    cout << "Recaudación total $ " << rec_total << endl << endl;
    return 0;
}
