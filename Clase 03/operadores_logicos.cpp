#include <iostream>
using namespace std;

int main(){
  char bebida;
  char empanadas;

  cout << "¿Trajiste bebidas? (S/N) ";
  cin >> bebida;

  cout << "¿Trajiste empanadas? (S/N) ";
  cin >> empanadas;
  cout << endl;

  if (bebida == 'S' || empanadas == 'S'){
    cout << "Podés entrar a la reunión";
  }
  else{
    cout << "No podés entrar a la reunión.";
  }

  return 0;
}
