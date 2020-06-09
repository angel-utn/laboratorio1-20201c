#include <iostream>
using namespace std;

/// Declaraciones de funciones
int sumar(int, int);
void cambiar(int[] );

int main()
{

    float n1, n2, res;
    cout << "Ingresar dos números: " << endl;
    cin >> n1;
    cin >> n2;
    res = sumar(n1, n2); /// Parámetro por valor
    cout << endl << "El resultado es: " << res << endl;

    int num[2] = {1000, 2000};
    cambiar(num); /// Parámetro por dirección
    cout << "Números: " << num[0] << " " << num[1];

    return 0;
}

/// Definición de las funciónes

/**
    Suma dos números enteros.
*/
int sumar(int a, int b){
    int r;
    r = a + b;
    return r;
}
void cambiar(int num[]){
    num[0] = 100;
    num[1] = 200;
}



