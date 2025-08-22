//
// Created by Laura on 19/08/2025.
#include "matematicas.h"

int sumar(int a, int b) {
    return a + b;
}

int restar(int a, int b) {
    return a - b;
}

int multiplicar(int a, int b) {
    return a * b;
}

float dividir(int a, int b) {
    if (b == 0) return 0;
    return (float)a / b;
}
