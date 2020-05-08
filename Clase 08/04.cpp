/**
Ej 08 TP 04
Hacer un programa para ingresar una lista de números que finaliza cuando se ingresa un
cero, luego informar el máximo y la posición del máximo en la lista. En caso de “empates”
considerar la primera aparición.
Ejemplo: 5, -10, 20, 8, 25, 13, 35, -8, -5, 20, 0. Se listará Máximo 35 Posición 7.
Ejemplo: 5, -10, 20, 8, 25, 13, 55, -8, 55, 20, 0. Se listará Máximo 55 Posición 7.
*/

#include <iostream>
using namespace std;
int main(){
    int n, maximo, posicion, i=0;
    cout << "Número: ";
    cin >> n;

    while (n != 0){
        i++;
        if (i == 1 || n > maximo){
            maximo = n;
            posicion = i;
        }
        cout << "Número: ";
        cin >> n;
    }
    cout << endl;
    cout << "Máximo  : " << maximo << endl;
    cout << "Posición: " << posicion << endl;

    return 0;
}
