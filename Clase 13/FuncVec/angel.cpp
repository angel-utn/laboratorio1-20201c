#include <iostream>
using namespace std;
#include "angel.h"

void cargar_vector(int vec[], int tam){
    int i;
    for(i=0; i<tam; i++){
        cout << "Ingresar número: ";
        cin >> vec[i];
    }
}

void mostrar_vector(int vec[], int tam){
    int i;
    for(i=0; i<tam; i++){
        cout << vec[i] << endl;
    }
}

int buscar_maximo(int v[], int t){
    int maximo = v[0], i;

    for(i=1; i<t; i++){
        if (v[i] > maximo){
            maximo = v[i];
        }
    }
    return maximo;
}

int contar_apariciones(int v[], int tam, int valorBuscado){
    int i, c=0;

    for(i=0; i<tam; i++){
        if (v[i] == valorBuscado){
            c++;
        }
    }
    return c;
}





