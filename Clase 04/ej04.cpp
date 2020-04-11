/**
Un banco ha decidido otorgar préstamos a 12 cuotas con tasa de interés bonificada a
los monotributistas de diferentes categorías. Las mismas son:
Categoría Tasa de interés
A, B y C    12%
D, E y F    20%
G           22%

Las demás categorías (H, I, J y K) no podrán solicitar ningún préstamo bonificado. Por lo
que deberán tramitarlo por otro medio.
Dada la categoría de una persona y el importe a solicitar en concepto de préstamo,
elaborar una salida como la siguiente:

Categoría: C
Importe solicitado: $ 50000
----------------------------
Interés %: 12%
Interés $: $6000
Importe a devolver sin IVA: $ 56000
Importe a devolver con IVA: $ 67760
Valor de la cuota: $ 5646.66
*/

#include <iostream>
using namespace std;

int main(){
  float importe, interes2, importe_dev, importe_dev_iva, cuota;
  char categoria;
  int interes1;

  interes1=interes2=importe_dev=importe_dev_iva=cuota=0;

  cout << "Ingresar categoría de monotributo: ";
  cin >> categoria;

  cout << "Ingresar importe: $";
  cin >> importe;

  switch (categoria){
    case 'A':
    case 'B':
    case 'C':
      ///12
      interes1 = 12;
      interes2 = importe * 0.12;
      importe_dev = importe * 1.12;
      importe_dev_iva = importe_dev * 1.21;
      cuota = importe_dev_iva / 12;
    break;

    case 'D':
    case 'E':
    case 'F':
      ///20
      interes1 = 20;
      interes2 = importe * 0.2;
      importe_dev = importe * 1.2;
      importe_dev_iva = importe_dev * 1.21;
      cuota = importe_dev_iva / 12;
    break;

    case 'G':
      ///22
      interes1 = 22;
      interes2 = importe * 0.22;
      importe_dev = importe * 1.22;
      importe_dev_iva = importe_dev * 1.21;
      cuota = importe_dev_iva / 12;
    break;

    default:
      cout << endl << "Categoría no incluída en los beneficios." << endl;
      return 0;
    break;

  }
  cout << endl << endl;
  cout << "Categoría:   " << categoria << endl;
  cout << "Importe  : $ " << importe << endl;
  cout << "-----------------------------------" << endl;
  cout << "Interés:  " << interes1 << endl;
  cout << "Interés: $" << interes2 << endl;
  cout << "Importe a devolver: $ " << importe_dev << endl;
  cout << "Importe a devolver (IVA): $" << importe_dev_iva << endl;
  cout << "Valor de la cuota: $ " << cuota << endl;

  return 0;
}
