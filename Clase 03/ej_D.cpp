/**
Una estación de servicio posee los siguientes precios de sus combustibles.

Código Combustible Precio por litro
g Gas Oil $ 42,4
n Nafta $ 45,5
G Gas Oil Premium $ 49,3
N Nafta Premium $ 50,7

Dado un código de combustible y una cantidad de litros. Informar el tipo de combustible
a facturar y el costo total de la venta.
*/
#include <iostream>
using namespace std;

int main(){
  char codigo;
  int litros;
  float total;

  cout << "Código de combustible: ";
  cin >> codigo;
  cout << "Cantidad de litros: ";
  cin >> litros;

  cout << endl;
  cout << "Datos de la venta: " << endl;
  cout << "--------------------" << endl;
  switch (codigo){
    case 'g':
      cout << "Gas Oil" << endl;
      total = litros * 42.4;
    break;
    case 'n':
      cout << "Nafta" << endl;
      total = litros * 45.5;
    break;
    case 'G':
      cout << "Gas Oil Premium" << endl;
      total = litros * 49.3;
    break;
    case 'N':
      cout << "Nafta Premium" << endl;
      total = litros * 50.7;
    break;
    default:
      cout << "Código de combustible incorrecto." << endl;
      total = 0;
    break;
  }
  if (total > 0){
    cout << "Importe $ " << total << endl;
  }
  return 0;
}
