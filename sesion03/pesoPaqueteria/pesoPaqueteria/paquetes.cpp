#include "paquetes.h"
#include <iostream>

// Reserva el arreglo dinámico y captura la cantidad
double* crearRegistro(int& cantidad) {
    std::cout << "Ingrese la cantidad de paquetes que llegaron: ";
    std::cin >> cantidad;

    // Validación básica para evitar tamaños negativos
    if (cantidad <= 0) return nullptr;

    // Uso de 'new' según restricciones
    return new double[cantidad];
}

void ingresarPesos(double* pesos, int cantidad) {
    for (int i = 0; i < cantidad; ++i) {
        std::cout << "Peso del paquete " << i + 1 << " (kg): ";
        std::cin >> pesos[i];
    }
}

double calcularPromedio(const double* pesos, int cantidad) {
    if (cantidad == 0) return 0.0;

    double sumaTotal = 0.0;
    for (int i = 0; i < cantidad; ++i) {
        sumaTotal += pesos[i];
    }
    return sumaTotal / cantidad;
}

int contarSobreLimite(const double* pesos, int cantidad, double limite) {
    int contador = 0;
    for (int i = 0; i < cantidad; ++i) {
        if (pesos[i] > limite) {
            contador++;
        }
    }
    return contador;
}

// Retorna el puntero al elemento más pesado dentro del arreglo
const double* buscarMasPesado(const double* pesos, int cantidad) {
    if (cantidad <= 0) return nullptr;

    const double* masPesado = &pesos[0];
    for (int i = 1; i < cantidad; ++i) {
        if (pesos[i] > *masPesado) {
            masPesado = &pesos[i];
        }
    }
    return masPesado;
}