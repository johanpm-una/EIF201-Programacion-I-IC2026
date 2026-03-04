#include "invertirArray.h"

void invertirArray(int arreglo[], int arregloCopia[], int size) {
    for (int i = 0; i < size; i++) {
        arregloCopia[i] = arreglo[size - 1 - i];
    }
}