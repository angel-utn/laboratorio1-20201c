//Ejercicio:
//Autor:DEK
//Fecha:01-05-2020
//Comentario:
/**Dadas las edades de los alumnos de los 35 cursos de TUP,
calcular e informar la edad máxima de cada uno de ellos.
No se sabe la cantidad de alumnos por curso. Para indicar el fin de un curso se coloca un valor de
edad igual a 0.
Informar además la edad máxima indicando el curso al que pertenece**/

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
  const int CANT_CUR=3;///el enunciado dice 35. Se acota para prueba
  int i, edad, eMax, curso, eMaxG=0, maxCurso;///1
  for(i=1;i<=CANT_CUR;i++){
    eMax=0;
    system("cls");
    cout<<"INGRESE EL NUMERO DE CURSO: ";
    cin>>curso;
    cout<<"INGRESE LA EDAD: ";
    cin>>edad;
    while(edad!=0){
      if(edad>eMax) eMax=edad;
      cout<<"INGRESE LA EDAD: ";
      cin>>edad;
      }
    cout<<"PARA EL CURSO: "<<curso<<endl;
    cout<<"EDAD MAXIMA: "<<eMax<<endl;
    system("pause>null");
    if(eMax>eMaxG){
      eMaxG=eMax;
      maxCurso=curso;
    }
  }
  cout<<"LA EDAD MAXIMA ENTRE TODOS LOS CURSOS FUE: "<<eMaxG<<endl;
  cout<<" EN EL CURSO: "<<maxCurso<<endl;
  system("pause");
  return 0;

}
