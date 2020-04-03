#include <iostream>
using namespace std;

int main(){
  int n;
  cout << "Ingresar un número: ";
  cin >> n;
  cout << endl;
  switch(n){
    case 1:
      cout << "Uno";
    break;
    case 2:
      cout << "Dos";
    break;
    case 3:
      cout << "Tres";
    break;
    case 4:
      cout << "Cuatro";
    break;
    default:
      cout << "Número fuera de rango.";
    break;
  }

  return 0;
}
