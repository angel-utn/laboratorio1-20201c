#include <iostream>
using namespace std;

int main(){
  int plato;
  char formapago;
  float importe, total;
  bool error = false;

  cout << "Ingresar código de plato: ";
  cin >> plato;

  cout << "Ingresar forma de pago  : ";
  cin >> formapago;

  cout << "Ingresar importe : $ ";
  cin >> importe;

  if (importe < 0){
    error = true;
  }

  total = importe;

  switch(formapago){
    case 'E':
    case 'e':
    case '1':
      switch(plato){
        case 1:
          total = importe * 0.75;
        break;
        case 2:
          total = importe * 0.9;
        break;
        case 3:
          total = importe * 0.95;
        break;
        default:
          error = true;
        break;
      }
    break;
    case 'C':
    case 'c':
    case '2':
      switch(plato){
        case 1:
          total = importe * 1.2;
        break;
        case 2:
          total = importe * 1.15;
        break;
        case 3:
          total = importe * 1.35;
        break;
        default:
          error = true;
        break;
      }
    break;
    case 'D':
    case 'd':
    case '3':
      total = importe * 0.95;
      if (plato > 3){
        error = true;
      }
    break;
    default:
      error = true;
    break;
  }
  cout << endl;
  if (error == false){
    cout << "El importe a pagar es: $ " << total << endl;
  }
  else{
    cout << "Hubo un error al ingresar los datos." << endl;
  }
  return 0;
}
