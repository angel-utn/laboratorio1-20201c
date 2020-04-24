/**
Hacer un programa que solicite una lista de números que finaliza cuando se ingresa el
número cero. Calcular e informar la cantidad de números impares de la lista e informar
cuál fue el primero de los impares ingresados.
*/
#include <iostream>
using namespace std;

int main(){
    int n, ci=0, primer_impar=0;

    cout << "Ingresar número: ";
    cin >> n;
    while(n != 0){
        if (n%2 != 0){
            ci++;
            if (ci == 1){
                primer_impar = n;
            }
        }

        cout << "Ingresar número: ";
        cin >> n;
    }
    cout << endl;
    cout << "A) Cantidad de números impares: " << ci << endl;
    if (ci > 0){
        cout << "B) Primer impar: " << primer_impar << endl;
    }
    else{
        cout << "B) No hubo impares." << endl;
    }
    return 0;
}
