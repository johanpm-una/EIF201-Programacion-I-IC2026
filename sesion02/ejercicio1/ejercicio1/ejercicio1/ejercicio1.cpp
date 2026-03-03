// ejercicio1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "arreglo.h"

int main()
{
    int numeros[SIZE];

    llenarArray(numeros, SIZE);
    mayorArray(numeros, SIZE);
    menorArray(numeros, SIZE);
    sumaArray(numeros, SIZE);
    promedioArray(numeros, SIZE);

    return 0;
}
