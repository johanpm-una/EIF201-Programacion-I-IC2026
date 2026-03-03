#include <iostream>
#include "arreglo.h"

void llenarArray(int arreglo[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << "Introduce un numero para la posicion [" << i << "]: ";
        std::cin >> arreglo[i];
    }
}

void mayorArray(int arreglo[], int size) {
    int mayor = arreglo[0];
    for (int i = 1; i < size; i++) {
        if (arreglo[i] > mayor) {
            mayor = arreglo[i];
        }
    }
    std::cout << "\nEl numero mas grande en el array es: " << mayor << std::endl;
}

void menorArray(int arreglo[], int size) {
    int menor = arreglo[0];
    for (int i = 1; i < size; i++) {
        if (arreglo[i] < menor) {
            menor = arreglo[i];
        }
    }
    std::cout << "\nEl numero mas pequeno en el array es: " << menor << std::endl;
}

void sumaArray(int arreglo[], int size) {
    int suma = 0;
    for (int i = 0; i < size; i++) {
        suma += arreglo[i];
    }
    std::cout << "\nLa suma de todos los numeros es: " << suma << std::endl;
}

void promedioArray(int arreglo[], int size) {
    int suma = 0;
    for (int i = 0; i < size; i++) {
        suma += arreglo[i];
    }
    double promedio = (double)suma / size;
    std::cout << "\nEl promedio de los numeros es: " << promedio << std::endl;
}

