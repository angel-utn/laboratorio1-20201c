/**
Hacer un programa que solicite el ingreso de 10 números enteros positivos y calcule e
informe el mayor de los números.
*/
#include <iostream>
using namespace std;

int main(){
  int n, i, maximo=0;

  for(i=1; i<=10; i++){
    cout << "Ingresar un número: ";
    cin >> n;

    if(n > maximo){
      maximo = n;
    }

  }

  cout << "El número máximo es: " << maximo << endl;

  return 0;
}
