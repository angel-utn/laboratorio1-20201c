/**
Hacer un programa para ingresar tres números y listar el máximo de ellos.
NOTA: Todos los números serán distintos entre sí.
*/
#include <iostream>
using namespace std;

int main(){
  int n, maximo;
  cout << "Ingresar número: ";
  cin >> maximo;
  cout << "Ingresar número: ";
  cin >> n;
  if (n > maximo){
    maximo = n;
  }
  cout << "Ingresar número: ";
  cin >> n;
  if (n > maximo){
    maximo = n;
  }
  cout << endl << "El número más grande es: " << maximo << endl;
  return 0;
}
