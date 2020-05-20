/**
A) El número de grupo con mayor porcentaje de números impares positivos respecto al
total de números que forman el grupo.
*/
#include <iostream>
using namespace std;

int main(){
    int grupo, n;
    int cont=0; ///A, B y C

    /// Punto A
    int grupo_mayor_porc = 0;
    int cip; // Cantidad de impares positivos del grupo
    float pip; //Porcentaje de impares positivos del grupo
    float max_pi=0; // Máximo porcentaje de impares sobre el total

    /// Punto B
    int i;
    int upri; //Último primo
    int div; //Contador de divisores
    int ppri; //Posición del último primo

    /// Punto C
    int ant;
    bool ordenado;
    int grupos_ordenados=0;


    for(grupo=1; grupo<=4; grupo++){
        cout << "Grupo : " << grupo << endl;
        cin >> n;
        cont = 0;
        ordenado = true; ///Asumo que la lista va a estar ordenada decrecientemente
        upri = ppri = -1;
        cip = 0;
        while(n != 0){

            /// Punto A
            if (n > 0 && n%2 != 0){
                cip++;
            }

            /// Punto B
            cont++;
            div = 0;
            for(i=1; i<=n; i++){
                if (n%i == 0){
                    div++;
                }
            }
            if (div == 2){
                upri = n;
                ppri = cont;
            }
            /// Punto  C
            if (cont > 1){
                if (n > ant){
                    ordenado = false; ///Se desordenó
                }
            }
            ant = n;
            cin >> n;
        }
        ///A
        pip = (float) cip / cont;
        if (pip > max_pi){
            max_pi = pip;
            grupo_mayor_porc = grupo;
        }
        ///B
        cout << endl << "PUNTO B" << endl;
        if (upri != -1){
            cout << "Último primo: " << upri << endl;
            cout << "Posición    : " << ppri << endl;
        }
        else{
            cout << "No hubo primos en este grupo." << endl;
        }
        ///C
        if (ordenado == true){
            grupos_ordenados++;
        }
        cout << endl;
    }
    cout << "PUNTO A" << endl;
    if (grupo_mayor_porc != 0){
        cout << "Grupo con mayor porcentaje de impares positivos: " << grupo_mayor_porc << endl << endl;
    }
    cout << "PUNTO C" << endl;
    cout << "Cantidad de grupos ordenados descendentemente: " << grupos_ordenados << endl;
    return 0;
}
