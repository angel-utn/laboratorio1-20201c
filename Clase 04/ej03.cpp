
/**
 
 Klostervirus es la pandemia que la Organización Mundial de Salud prevé para el año
 2021. Para evitar la propagación de la misma ha decidido comunicar cuáles son las
 características para pertenecer a los distintos grupos de riesgo.
 Riesgo moderado
    - Mujeres y hombres de más de 65 años de edad.
 Riesgo alto
     - Mujeres hasta 10 años de edad y más de 80 años de edad.
     - Hombres hasta 6 años de edad y más de 75 años de edad.
 
 Dados el género y la edad de una persona. Calcular a qué tipo de población pertenece: "Riesgo
 alto", "Riesgo moderado" o "Sin riesgo" para contraer Klostervirus.
 */

#include <iostream>
using namespace std;
 
 int main()
 {
  
     int edad;
     char genero;
     
     cout << "Edad: ";
     cin >> edad;
     
     cout << "Genero (H- Hombre M- Mujer): ";
     cin >> genero;
     
     if((genero == 'M' && (edad <= 10 || edad >= 80)) ||
        (genero == 'H' && (edad <= 6 || edad >= 75))){
         
         cout << "Riesgo Alto" << endl;
     }
     else
     {
         if(edad > 65){
             cout << "Riesgo Moderado" << endl;
         }
         else{
             cout << "Sin Riesgo" << endl;
         }
     }
     
     return 0;
 }
