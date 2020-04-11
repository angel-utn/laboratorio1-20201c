/**
Una materia define la condición de sus estudiantes de acuerdo a las siguientes reglas:
-
Promoción: Si la nota de sus dos parciales son mayores o iguales a 7 o si el
promedio de notas de sus dos parciales es mayor o igual a 8.
- Regulariza: Si el promedio de notas de sus parciales es mayor o igual a 6.
Y ambas notas debe ser >= 6
- Recursa: Si alguna de sus notas es menor a 4.
De lo contrario, el estado del estudiante es "Recupera parciales".
Dadas las dos notas de un estudiante. Calcular la condición en la que se encuentra.
*/
#include <iostream>
using namespace std;

int main(){
  int n1, n2;
  float prom;
  cout << "Ingresar las dos notas del alumno: " << endl;
  cin >> n1;
  cin >> n2;
  cout << endl;
  /**
  int / int --> int
  float / int
  int / float   --> float
  float / float
  */
  prom = (n1 + n2)/(float)2;

  if ((n1 >= 7 && n2 >= 7) || (prom >= 8)){
    cout << "Promociona la materia. ";
  }
  else{
    if ((n1 >= 6 && n2 >= 6)){
      cout << "Regulariza la materia.";
    }
    else{
      if (n1 < 4 || n2 < 4){
        cout << "Recursa la materia.";
      }
      else{
        cout << "Recupera parciales.";
      }
    }
  }


  return 0;
}
