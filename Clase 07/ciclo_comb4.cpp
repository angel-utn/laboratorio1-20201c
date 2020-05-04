//Ejercicio:
//Autor:DEK
//Fecha:01-05-2020
//Comentario:
/**Dadas las edades de los alumnos de cada uno de los cursos de TUP,
calcular e informar la edad máxima de cada uno de ellos.**/
/**Informar además la edad máxima entre todos los cursos, indicando a que curso pertenece
El fin de cada curso se indica con una edad igual a cero. El fin de todos los cursos se indica
con un valor de curso negativo
**/


# include<iostream>
# include<cstdlib>


using namespace std;


int main(){
  int edad, eMax, curso, eMaxG=0, maxCurso;
  cout<<"INGRESE EL NUMERO DE CURSO: ";
  cin>>curso;
  while(curso>=0){
    cout<<"INGRESE LA EDAD: ";
    cin>>edad;
    while(edad!=0){
      eMax=0;
      if(edad>eMax) eMax=edad;
      cout<<"INGRESE LA EDAD: ";
      cin>>edad;
      }
    cout<<"PARA EL CURSO: "<<curso<<endl;
    cout<<"EDAD MAXIMA: "<<eMax<<endl;///3
    system("pause>null");
    system("cls");
    if(eMax>eMaxG){
      eMaxG=eMax;
      maxCurso=curso;
    }
    cout<<"INGRESE EL NUMERO DE CURSO: ";
    cin>>curso;

  }
  cout<<"LA EDAD MAXIMA ENTRE TODOS LOS CURSOS FUE: "<<eMaxG<<endl;
  cout<<" EN EL CURSO: "<<maxCurso<<endl;
  system("pause");
  return 0;
}
