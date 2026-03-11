#include <iostream>
#include <iomanip>
#include "calculoMatriz.h"

int main() {
    int matriz[FILAS][COLS];

    std::cout << "numero matriz " << FILAS << "x" << COLS << ":" << std::endl;

    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLS; j++) {
            std::cout << "elemento [" << i << "][" << j << "]: ";
            std::cin >> matriz[i][j];
        }
    }

    sumarFilas(matriz);
    sumarColumnas(matriz);

    return 0;
}