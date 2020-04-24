/**
    Dada una lista de números enteros que finaliza con un número par. Calcular e informar
    el máximo de los números ingresados.
    NOTA: El número con que finaliza la lista puede ser el máximo a informar.

    5, 15, 2 --> Termina la lista. Máximo 15

    5, 15, 20 --> Termina lista. Máximo 20.

*/
#include <iostream>
using namespace std;
int main(){
    int n=1, maximo=0;
    while (n%2 != 0){
        cout << "Número: ";
        cin >> n;
        if (n > maximo){
            maximo = n;
        }
    }
    cout << "Máximo de la lista: " << maximo << endl;

    return 0;
}
