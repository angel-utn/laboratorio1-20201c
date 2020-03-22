/**
  Se ingresan dos números reales por teclado.
  Si el primero es mayor al segundo hacer la suma y mostrarla.
  Sino mostrar los dos valores ingresados.
*/
#include <iostream>
using namespace std;

int main(){
  float n1, n2, suma;
  cout << "Primer número: ";
  cin >> n1;
  cout << "Segundo número: ";
  cin >> n2;
  suma = n1 + n2;
  cout << endl << endl;
  if (n1 > n2){
    cout << "La suma es: " << suma;
  }
  else{
    cout << "Primer número : " << n1 << endl;
    cout << "Segundo número: " << n2 << endl;
  }
  return 0;
}
