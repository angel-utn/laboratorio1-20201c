#include <iostream>
using namespace std;

int main(){
    int legajo;
    char apellido[25];
    char nombre[25];

    cout << "Legajo: ";
    cin >> legajo;
    cin.ignore();
    cout << "Apellido: ";
    cin.getline(apellido, 25);
    cout << "Nombre: ";
    cin.getline(nombre, 25);
    cout << endl << endl;

    cout << "Datos del estudiante" << endl;
    cout << "Legajo   : " << legajo << endl;
    cout << "Apellido : " << apellido << endl;
    cout << "Nombre   : " << nombre << endl;

    return 0;
}
