/**
Hacer un programa para ingresar una lista de números que finaliza cuando se ingresa un
cero, luego informar el máximo de los negativos y el mínimo de los positivos.
*/

#include <iostream>
using namespace std;
int main(){
    int n, maximo_negativo=0, minimo_positivo=0;
    cout << "Número: ";
    cin >> n;
    while (n != 0){
        if (n > 0){
            if (minimo_positivo == 0 || n < minimo_positivo){
                minimo_positivo = n;
            }
        }
        else{
            if (maximo_negativo == 0 || n > maximo_negativo){
                maximo_negativo = n;
            }
        }
        cout << "Número: ";
        cin >> n;
    }
    cout << endl;

    if (maximo_negativo != 0){
        cout << "Máximo negativo  : " << maximo_negativo << endl;
    }
    if (minimo_positivo != 0){
        cout << "Mínimo positivo  : " << minimo_positivo << endl;
    }
    return 0;
}
