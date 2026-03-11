#ifndef PAQUETES_H
#define PAQUETES_H

double* crearRegistro(int& cantidad);

void ingresarPesos(double* pesos, int cantidad);

double calcularPromedioSuma(const double* pesos, int cantidad);

int contarSobreLimite(const double* pesos, int cantidad, double limite);

const double* buscarMasPesado(const double* pesos, int cantidad);

#endif