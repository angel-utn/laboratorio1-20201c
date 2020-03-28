/**
  Datos de entrada: Cantidad de huevos
  Proceso: ?
  Información de salida: Precio a pagar
*/
#include <iostream>
using namespace std;

int main(){
  int cantidad, cajas, sueltos;
  float precio;
  cout << "Ingresar la cantidad de huevos: ";
  cin >> cantidad;

  cajas = cantidad / 12;
  sueltos = cantidad % 12;
  precio = cajas*100+sueltos*12;

  cout << "El importe a pagar es: $";
  cout << precio;
  cout << endl;
  ///cout << "Cantidad de cajas: " << cajas << endl;
  return 0;
}
