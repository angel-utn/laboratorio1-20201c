/**
Hacer un programa para cargar un vector de números enteros de 10 elementos.
Calcular e informar:
- El máximo valor del vector.
- La/s posicion/en donde aparece el máximo valor dentro del vector.
- La cantidad de veces que aparece el máximo valor dentro del vector.
*/
#include <iostream>
using namespace std;

int main(){
    const int TAM = 10;
    int vec[TAM], i, maximo, cont = 0;
    /// Cargar el vector
    for(i=0; i<TAM; i++){
        cout << "Ingresar un número: ";
        cin >> vec[i];
    }
    /// Calcular el máximo valor del vector
    maximo = vec[0];
    for(i=1; i<TAM; i++){
        if (vec[i] > maximo){
            maximo = vec[i];
        }
    }
    cout << endl << "Valor máximo: " << maximo << endl;
    cout << endl;
    cout << "Posiciones donde aparece el máximo valor: " << endl;
    /// Mostrar posiciones donde aparece un valor (máximo)
    for(i=0; i<TAM; i++){
        if (vec[i] == maximo){
            cout << i+1 << endl;
        }
    }
    /// Contar ocurrencias de un valor dentro del vector (máximo)
    for(i=0; i<TAM; i++){
        if (vec[i] == maximo){
            cont++;
        }
    }
    cout << endl;
    cout << "Cantidad de ocurrencias del valor máximo: " << cont << endl;
    return 0;
}
