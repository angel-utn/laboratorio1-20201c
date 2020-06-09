#ifndef ANGEL_H_INCLUDED
#define ANGEL_H_INCLUDED

/**
    Carga un vector de enteros de un tamaño que se envía como parámetro
*/
void cargar_vector(int [], int);

/**
    Muestra un vector de enteros de un tamaño que envía como parámetro
*/
void mostrar_vector(int [], int);

/**
    Retorna el máximo elemento del vector de enteros cuyo tamaño
    se envía como parámetro.
*/
int buscar_maximo(int [], int);

/**
    Retorna la cantidad de veces que aparece el parámetro valor en un vector
    cuyo tamaño se envía como parámetro.
*/
int contar_apariciones(int [], int, int);

#endif // ANGEL_H_INCLUDED
