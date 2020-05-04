//Ejercicio:
//Autor:DEK
//Fecha:
//Comentario:
/// Dadas las edades de los 10 cursos calcular la edad máxima.
///Cada curso tiene 25 alumnos
///Informar además la edad máxima y a que curso pertenece
# include<iostream>
# include<cstdlib>


using namespace std;


int main(){
  const int CANT_ALU=5, CANT_CUR=3;///1
  int i, j, edad, eMax, curso, eMaxG=0, maxCurso;///1
  for(j=1;j<=CANT_CUR;j++){
    system("cls");
    cout<<"INGRESE EL NUMERO DE CURSO: ";
    cin>>curso;
    eMax=0;///3
    for(i=1;i<=CANT_ALU;i++){
      cout<<"INGRESE LA EDAD: ";///15
      cin>>edad;///15
      if(edad>eMax) eMax=edad;///15
      }
    cout<<"PARA EL CURSO: "<<curso<<endl;
    cout<<"EDAD MAXIMA: "<<eMax<<endl;///3
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

