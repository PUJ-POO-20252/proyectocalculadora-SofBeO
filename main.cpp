#include <iostream>
#include "matematicas.h"

int main() {
    int x = 20;
    int y = 2;

    std::cout << "Suma: " << sumar(x, y) << std::endl;
    std::cout << "Resta: " << restar(x, y) << std::endl;
    std::cout << "multiplicacion: " << multiplicar(x, y) << std::endl;
    std::cout << "Division: " << dividir(x, y) << std::endl;

    return 0;
}
