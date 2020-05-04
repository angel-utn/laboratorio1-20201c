//Ejercicio:
//Autor:DEK
//Fecha:01-05-2020
//Comentario:
/**Dadas las edades de los alumnos de los cursos de TUP,
calcular e informar la edad máxima de cada uno de ellos.
Se sabe que la cantidad de alumnos por curso es 25. Para indicar el fin de los cursos se
coloca un valor de curso igual a 0.
Informar además la edad máxima indicando el curso al que pertenece**/


# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
  const int CANT_ALU=5;
  int i, edad, eMax, curso, eMaxG=0, maxCurso;
  cout<<"INGRESE EL NUMERO DE CURSO: ";
  cin>>curso;
  while(curso!=0){
    eMax=0;
    for(i=1;i<=CANT_ALU;i++){
        cout<<"INGRESE LA EDAD: ";
        cin>>edad;
        if(edad>eMax) eMax=edad;
        }
    cout<<"PARA EL CURSO: "<<curso<<endl;
    cout<<"EDAD MAXIMA: "<<eMax<<endl;
    system("pause>null");
    if(eMax>eMaxG){
      eMaxG=eMax;
      maxCurso=curso;
    }
    system("cls");
    cout<<"INGRESE EL NUMERO DE CURSO: ";
    cin>>curso;
  }
  cout<<"LA EDAD MAXIMA ENTRE TODOS LOS CURSOS FUE: "<<eMaxG<<endl;
  cout<<" EN EL CURSO: "<<maxCurso<<endl;
  system("pause");
  return 0;

}
