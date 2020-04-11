/**
 
 Hacer un programa que solicite el ingreso de 10 números enteros
 (pueden ser positivos, negativos o cero) y calcule e informe el mayor de los números.
 

 */

#include <iostream>
using namespace std;
 
 int main()
 {
  
     int i, mayor, numero;
     bool primero = true;
     
     
     for(i=1; i<=10; i++){
         
         cout << "Numero: ";
         cin >> numero;
             
         if(primero==true){
             primero=false;
             mayor = numero;
         }
         else if(numero > mayor){
             mayor = numero;
         }
         
     }
     
     cout << endl << endl << "Mayor: "<<mayor<<endl;
     
     return 0;
 }
