/**
Hacer un programa que solicite el ingreso de un número entero. Solicitar indefinidamente
el número mientras no se ingresa un número en el rango [1; 5]. Contar la cantidad de
veces que ingresaron erróneamente el ingreso.
*/
#include <iostream>
using namespace std;

int main(){
    int n, c=0;
    cout << "Ingresar un número [1-5]: ";
    cin >> n;

    /// Código para validar que n sea correcto [1-5]
    ///while (!(n >= 1 && n <= 5)){
    while(n < 1 || n > 5){
        cout << endl << "Reingresar el número [1-5]: ";
        cin >> n;
        c++;
    }

    cout << endl << "El número ingresado es: " << n;
    cout << endl << "Cantidad de errores   : " << c;

    return 0;
}
