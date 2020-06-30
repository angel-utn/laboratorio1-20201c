#include <iostream>
using namespace std;
#include <cstdlib>
#include <ctime>
#include "rlutil.h"
using namespace rlutil;

void recuadro(int x, int y, int ancho, int alto){
    /// Reemplazar éstos códigos por los de Windows para correr en Windows.
    const char *UI_BOTTOM_RIGHT = "\e(0\x6a\e(B"; // 188 - ┘
    const char *UI_BOTTOM_LEFT = "\e(0\x6d\e(B"; // 200 - └
    const char *UI_TOP_LEFT = "\e(0\x6c\e(B"; // 201 - ┌
    const char *UI_TOP_RIGHT = "\e(0\x6b\e(B"; // 187 - ┐
    const char *UI_CROSS = "\e(0\x6e\e(B"; // 206 - ┼
    const char *UI_HORIZONTAL_LINE = "\e(0\x71\e(B"; // 205 - ─
    const char *UI_HORIZONTAL_LINE_TOP =  "\e(0\x76\e(B"; // 202 - ┴
    const char *UI_HORIZONTAL_LINE_BOTTOM =  "\e(0\x77\e(B"; // 203 - ┬";
    const char *UI_VERTICAL_LINE = "\e(0\x78\e(B"; // 186 - │
    const char *UI_VERTICAL_LINE_LEFT =  "\e(0\x74\e(B"; // 204 - ├
    const char *UI_VERTICAL_LINE_RIGHT =  "\e(0\x75\e(B"; // 185 - ┤


    /// Borramos el espacio del recuadro
    int i, j;
    for(i=x; i<=x+ancho; i++){
        for(j=y; j<=y+alto; j++){
            setBackgroundColor(RED);
            locate(i, j);
            cout << " ";

        }
    }
    setColor(WHITE);
    /// Líneas horizontales
    for(i=x; i<=x+ancho; i++){
        locate(i, y);
        cout << UI_HORIZONTAL_LINE;
        locate(i, y+alto);
        cout << UI_HORIZONTAL_LINE;
    }
    /// Líneas verticales
    for(i=y; i<=y+alto; i++){
        locate(x, i);
        cout << UI_VERTICAL_LINE;
        locate(x+ancho, i);
        cout << UI_VERTICAL_LINE;
    }
    /// Vértices
    locate(x, y);
    cout << UI_TOP_LEFT;
    locate(x, y+alto);
    cout << UI_BOTTOM_LEFT;
    locate(x+ancho, y);
    cout << UI_TOP_RIGHT;
    locate(x+ancho, y+alto);
    cout << UI_BOTTOM_RIGHT;
}

void dibujarDado(int nroDado, int valor){
    const int Y = 5;
    const int ALTO = 4;
    const int INI = 15;
    const int X = INI + (nroDado * 10);
    const int ANCHO = 8;

    /// Ubicaciones del punto
    const int CENTRO_X = X + ANCHO/2;
    const int CENTRO_Y = Y + ALTO/2;
    const int IZQUIERDA = CENTRO_X - 2;
    const int ARRIBA = CENTRO_Y - 1;
    const int DERECHA= CENTRO_X + 2;
    const int ABAJO= CENTRO_Y + 1;


    recuadro(X, Y, ANCHO, ALTO);

    /// Dibujar los puntos
    const char *DOT = "\u2022";

    setBackgroundColor(RED);
    setColor(WHITE);
    switch(valor){
        case 1:
            locate(CENTRO_X, CENTRO_Y);
            cout << DOT;
        break;
        case 2:
            if (nroDado%2 == 0){
                locate(IZQUIERDA, ARRIBA);
                cout << DOT;
                locate(DERECHA, ABAJO);
                cout << DOT;
            }
            else{
                locate(DERECHA, ARRIBA);
                cout << DOT;
                locate(IZQUIERDA, ABAJO);
                cout << DOT;
            }
        break;
        case 3:
            if (nroDado%2 == 0){
                locate(IZQUIERDA, ARRIBA);
                cout << DOT;
                locate(DERECHA, ABAJO);
                cout << DOT;
            }
            else{
                locate(DERECHA, ARRIBA);
                cout << DOT;
                locate(IZQUIERDA, ABAJO);
                cout << DOT;
            }
            locate(CENTRO_X, CENTRO_Y);
            cout << DOT;
        break;
        case 4:
            locate(IZQUIERDA, ARRIBA);
            cout << DOT;
            locate(DERECHA, ABAJO);
            cout << DOT;
            locate(DERECHA, ARRIBA);
            cout << DOT;
            locate(IZQUIERDA, ABAJO);
            cout << DOT;
        break;
        case 5:
            locate(IZQUIERDA, ARRIBA);
            cout << DOT;
            locate(DERECHA, ABAJO);
            cout << DOT;
            locate(DERECHA, ARRIBA);
            cout << DOT;
            locate(IZQUIERDA, ABAJO);
            cout << DOT;
            locate(CENTRO_X, CENTRO_Y);
            cout << DOT;
        break;
        case 6:
            locate(IZQUIERDA, ARRIBA);
            cout << DOT;
            locate(DERECHA, ABAJO);
            cout << DOT;
            locate(DERECHA, ARRIBA);
            cout << DOT;
            locate(IZQUIERDA, ABAJO);
            cout << DOT;
            locate(DERECHA, CENTRO_Y);
            cout << DOT;
            locate(IZQUIERDA, CENTRO_Y);
            cout << DOT;
        break;
    }
    resetColor();
    setBackgroundColor(DARKGREY);
}

void tirarDados(int v[]){
    int i;
    for(i=0; i<3; i++){
        v[i] = rand()%6+1;
        dibujarDado(i+1, v[i]);
    }
}

int main()
{
    srand(time(NULL));
    int dados[3];
    hidecursor();
    for(int i=1; i<=10; i++){
        locate(1,1);
        cout << "Tirada #" << i;
        tirarDados(dados);
        anykey();
    }

    locate(1, 24);
    return 0;
}
