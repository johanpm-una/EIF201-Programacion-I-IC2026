#include <iostream>
#include <string>
#include "modificarNombre.h"

int main()
{
    std::string nombreCompleto;

    std::cout << "Ingresa tu nombre completo: ";
    std::getline(std::cin, nombreCompleto);

    std::string nombre = extraerNombre(nombreCompleto);
    std::string apellido = extraerApellido(nombreCompleto);

    std::cout << "nombre " << nombre << std::endl;
    std::cout << "apellido " << apellido << std::endl;

    return 0;
}