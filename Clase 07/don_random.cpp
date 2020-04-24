#include <iostream>
using namespace std;
#include <ctime>
#include <cstdlib>

int main(){
    int num; //numero a generar al azar
    srand(time(NULL)); // Se inicializa la función de random
    num = 1 + rand() % 100;
    cout << "Numero al azar: " << num << endl;
    return 0;
}