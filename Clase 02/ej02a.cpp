/**
Hacer un programa para ingresar tres números y listar el máximo de ellos.
NOTA: Todos los números serán distintos entre sí.
*/
#include <iostream>
using namespace std;

int main(){
  int n1, n2, n3;
  cout << "Ingresar número : ";
  cin >> n1;
  cout << "Ingresar número : ";
  cin >> n2;
  cout << "Ingresar número : ";
  cin >> n3;

  if (n1 > n2 && n1 > n3){
    cout << "El número más grande es: " << n1 << endl;
  }
  else{
    if (n2 > n3){
      cout << "El número más grande es: " << n2 << endl;
    }
    else{
      cout << "El número más grande es: " << n3 << endl;
    }
  }

  return 0;
}
