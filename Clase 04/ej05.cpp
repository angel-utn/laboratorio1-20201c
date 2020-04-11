/**
Una estación de servicio posee los siguientes precios de sus combustibles.
Código    Combustible Precio por litro
g Gas Oil           $ 42,4
n Nafta             $ 45,5
G Gas Oil Premium   $ 49,3
N Nafta Premium     $ 50,7

Dado un código de combustible y una cantidad de litros. Informar el tipo de combustible
a facturar y el costo total de la venta.

Igual al (D) pero que el programa permita registrar 5 ventas. Al terminar la carga de las
cinco ventas, informar:
- Cantidad de ventas unitarias para cada tipo de combustible.
- Recaudación total en pesos.

*/

#include <iostream>
using namespace std;

int main(){
  char tipo;
  float litros;
  float importe;
  float recaudacion=0;
  int i, nafta, gasoil, nafta_p, gasoil_p;
  nafta=gasoil=nafta_p=gasoil_p = 0;

  for(i=1; i<=3; i++){
    cout << "Tipo de combustible: ";
    cin >> tipo;

    cout << "Cantidad en litros: ";
    cin >> litros;

    switch(tipo){
      case 'g':
        importe = litros * 42.4;
        gasoil++;
      break;
      case 'n':
        importe = litros * 45.5;
        nafta++;
      break;
      case 'G':
        importe = litros * 49.3;
        gasoil_p++;
      break;
      case 'N':
        importe = litros * 50.7;
        nafta_p++;
      break;
    }
    cout << endl << "Importe de la venta: " << importe << endl;
    recaudacion += importe;
  }
  cout << endl << endl;

  cout << "Gasoil: " << gasoil << endl;
  cout << "Nafta : " << nafta << endl;
  cout << "Gasoil premium: " << gasoil_p << endl;
  cout << "Nafta premium: " << nafta_p << endl;
  cout << endl;
  cout << "Recaudación total: $ " << recaudacion << endl;

  return 0;
}
