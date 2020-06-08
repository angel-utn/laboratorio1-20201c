//Ejercicio:
//Autor:DEK
//Fecha:
//Comentario:

# include<iostream>
# include<cstdlib>
# include<ctime>

using namespace std;
/**
a) Hacer un programa en el que dos participantes tiren 3 dados, de a un participante por vez,
y se informe cuál de los participantes ganó.
Se considera ganador al participante que al sumar los dados obtenga el valor más alto.

b) Modificar el programa anterior de tal manera que si algún participante saca los tres
dados iguales gane el partido. Si ambos participantes sacan 3 dados iguales, el ganador será
el que más puntos sume.

c) Modificar el programa anterior de tal manera que pueda jugarse un número de rondas determinadas.
El ganador será el que más rondas gane.

d) Modificar el programa de tal manera que termine cuando alguno de los participantes haya ganado
10 rondas. Ese participante será el ganador.
**/

void tirarDados(int vecDados[], int otro);
void mostrarDados(int v[], int tam);
int sumarPuntos(int dados[], int tam);

int main(){
    const int TAM=4;
    int i, dados[TAM], puntos1, puntos2, numeros[6]={0};
    tirarDados(dados, TAM);
    mostrarDados(dados, TAM);
    puntos1=sumarPuntos(dados, TAM);
    cout<<"PUNTOS JUGADOR 1: "<<puntos1<<endl;
    /**Idea para el punto b
    for(i=0;i<TAM;i++)numeros[dados[i]-1]++;
    for(i=0;i<6;i++){
            cout<<"EL NUMERO "<<i+1<< " APARECIO "<<numeros[i]<<" VECES"<<endl;
    }
    */
    system("pause");
    tirarDados(dados, TAM);
    mostrarDados(dados, TAM);
    puntos2=sumarPuntos(dados, TAM);
    cout<<"PUNTOS JUGADOR 2: "<<puntos2<<endl<<endl;
    if(puntos1>puntos2){
        cout<<"GANO EL JUGADOR 1"<<endl;
    }else{
        if(puntos2>puntos1){
            cout<<"GANO EL JUGADOR 2"<<endl;
        }
        else cout<<"EMPATARON"<<endl;
    }
    return 0;
}



 void tirarDados(int vecDados[], int otro){///ojo que debe asignar valores aleatorios
    int i, n;
    srand(time(NULL));
    for(i=0;i<otro;i++){
       vecDados[i]=(rand()%6)+1;
     }
    }

 void mostrarDados(int v[], int tam){
    int i;
    for(i=0;i<tam;i++){
        cout<<v[i]<<"\t";
    }
    cout<<endl;
 }

 int sumarPuntos(int dados[], int tam){
    int i, suma=0;
    for(i=0;i<tam;i++){
        suma+=dados[i];

    }
    return suma;
 }
