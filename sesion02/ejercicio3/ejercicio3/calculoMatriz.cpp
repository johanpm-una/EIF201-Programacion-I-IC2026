#include <iostream>
#include <iomanip>
#include "calculoMatriz.h"


void sumarFilas(int matriz[FILAS][COLS]) {
    for (int i = 0; i < FILAS; i++) {
        int sumaDeFilas = 0;
        for (int j = 0; j < COLS; j++) {
            sumaDeFilas += matriz[i][j];
        }
        std::cout << "suma de la fila " << i << ":" << std::setw(6) << sumaDeFilas << std::endl;
    }
}

void sumarColumnas(int matriz[FILAS][COLS]) {
    for (int j = 0; j < COLS; j++) {
        int sumaDeCol = 0;
        for (int i = 0; i < FILAS; i++) {
            sumaDeCol += matriz[i][j];
        }
        std::cout << "suma de la columna " << j << ":" << std::setw(8) << sumaDeCol << std::endl;
    }
}