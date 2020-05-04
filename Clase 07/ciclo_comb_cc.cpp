//Ejercicio:
//Autor:DEK
//Fecha: 01-05-2019
//Comentario:
/**Dadas las edades de los alumnos de cada uno de los cursos de TUP,
calcular e informar la edad máxima de cada uno de ellos.**/

# include<iostream>
# include<cstdlib>
# include<cstdio>
# include<cstring>

using namespace std;


int main(){
    int curso, edad, eMax, cursoAnt;
    cout<<"INGRESE EL NUMERO DE CURSO: ";
    cin>>curso;
    while(curso>0){
        cursoAnt=curso;
        eMax=0;
        while(curso==cursoAnt){
              cout<<"INGRESE LA EDAD: ";
              cin>>edad;
              if(edad>eMax)eMax=edad;
              cout<<"INGRESE EL NUMERO DE CURSO: ";
              cin>>curso;
        }
      cout<<"EDAD MAXIMA: "<<eMax<<endl;
      cout<<"PARA EL CURSO: "<<cursoAnt<<endl;
      system("pause");
    }

    return 0;
}
