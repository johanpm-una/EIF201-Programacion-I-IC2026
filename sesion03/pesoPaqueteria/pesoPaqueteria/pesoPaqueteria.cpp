#include <iostream>
#include "paquetes.h"

int main() {
    int cantidad = 0;

    double* arregloPesos = crearRegistro(cantidad);

    if (arregloPesos == nullptr) {
        std::cout << "No se ingresaron paquetes validos." << std::endl;
        return 0;
    }

    ingresarPesos(arregloPesos, cantidad);

    double promedio = calcularPromedio(arregloPesos, cantidad);
    double pesoTotal = promedio * cantidad;

    std::cout << "\n+-------- Resultados de Bodega --------+" << std::endl;
    std::cout << "Peso Total: " << pesoTotal << " kg" << std::endl;
    std::cout << "Peso Promedio: " << promedio << " kg" << std::endl;
    std::cout << "\n+--------------------------------------+" << std::endl;

    double limite;
    std::cout << "\nIngrese el limite de peso permitido: ";
    std::cin >> limite;

    int sobreLimite = contarSobreLimite(arregloPesos, cantidad, limite);
    std::cout << "Paquetes que superan el limite: " << sobreLimite << std::endl;

    const double* masPesado = buscarMasPesado(arregloPesos, cantidad);

    if (masPesado != nullptr) {
        std::cout << "El paquete mas pesado pesa: " << *masPesado << " kg" << std::endl;
    }
    std::cout << "\n+--------------------------------------+" << std::endl;

    delete[] arregloPesos;
    arregloPesos = nullptr;

    return 0;
}