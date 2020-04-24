#include <iostream>
using namespace std;

int main(){
    int n, c=-1;

    do{
        cout << "Ingresar número: ";
        cin >> n;
        c++;
    }while(n < 1 || n > 5);

    cout << endl << "Número ingresado   : " << n;
    cout << endl << "Cantidad de errores: " << c;

    return 0;
}
