#include <iostream>
using namespace std;

int main(){
    int ciudad, id, asistentes, i;
    float recaudacion;
    ///Punto A
    float tot_rec;
    ///Punto B
    int min_id;
    int min_asistentes=-1;
    ///Punto C
    float suma_rec=0, promedio;
    int suma_asistentes=0;

    cout << "Ciudad: ";
    cin >> ciudad;

    while(ciudad >= 0){
        tot_rec = 0;
        for(i=1; i<=3; i++){

            cout << "ID: ";
            cin >> id;
            cout << "Asistentes: ";
            cin >> asistentes;
            cout << "Recaudación: $";
            cin >> recaudacion;
            tot_rec += recaudacion;
            suma_rec += recaudacion; /// suma_rec = suma_rec + recaudacion;
            suma_asistentes += asistentes;

            ///Acá calculo el mínimo -- Punto B
            if (min_asistentes == -1 || asistentes < min_asistentes){
                min_asistentes = asistentes;
                min_id = id;
            }
            cout << endl;
        }
        cout << endl <<  "PUNTO A" << endl;
        cout << "Ciudad     : " << ciudad << endl;
        cout << "Recaudación: $" << tot_rec << endl;
        cout << "----------------------" << endl;
        cout << "Ciudad: ";
        cin >> ciudad;
    }
    promedio = suma_rec / (float) suma_asistentes;

    cout << "PUNTO B:" << endl;
    cout << "ID: " << min_id << endl;
    cout << "Asistentes: " << min_asistentes << endl << endl;

    cout << "PUNTO C: " << endl;
    cout << "Promedio: " << promedio << endl;


    return 0;
}
