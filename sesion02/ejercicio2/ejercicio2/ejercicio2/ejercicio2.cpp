#include <iostream>
#include "invertirArray.h"


int main()
{
    int normalArray[SIZE];
    int invertidoArray[SIZE];

    std::cout << "Ingresa el primer numero ";
    std::cin >> normalArray[0];
 
    for (int i = 1; i < SIZE; i++) {
            std::cout << "Numero " << i + 1 << ": ";
            std::cin >> normalArray[i];
    }

    invertirArray(normalArray, invertidoArray, SIZE);

    std::cout << "Original:  ";
    for (int i = 0; i < SIZE; i++) std::cout << normalArray[i] << " ";

    std::cout << "\nInvertido: ";
    for (int i = 0; i < SIZE; i++) std::cout << invertidoArray[i] << " ";

    return 0;
}
