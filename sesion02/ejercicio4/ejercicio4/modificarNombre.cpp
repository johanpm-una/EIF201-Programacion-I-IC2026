#include "modificarNombre.h"

std::string extraerNombre(const std::string& nombreCompleto) {
    size_t espacio = nombreCompleto.find(' ');
    if (espacio != std::string::npos) {
        return nombreCompleto.substr(0, espacio);
    }
    return nombreCompleto;
}

std::string extraerApellido(const std::string& nombreCompleto) {
    size_t primerEspacio = nombreCompleto.find(' ');
    if (primerEspacio == std::string::npos) {
        return "";
    }
    size_t inicioApellido = primerEspacio + 1;
    size_t segundoEspacio = nombreCompleto.find(' ', inicioApellido);
    if (segundoEspacio != std::string::npos) {
        return nombreCompleto.substr(inicioApellido, segundoEspacio - inicioApellido);
    }
    return nombreCompleto.substr(inicioApellido);
}