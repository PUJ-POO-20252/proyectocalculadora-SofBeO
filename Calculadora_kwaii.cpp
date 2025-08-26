//
// Created by Laura on 26/08/2025.
//#include <iostream>
#include "matriz_utils.h"

int main() {
    int matrizA[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int matrizB[2][3] = {{6, 5, 4}, {3, 2, 1}};
    int resultado[2][3];

    sumarMatrices(matrizA, matrizB, resultado);

    imprimirMatriz("Matriz A", matrizA);
    imprimirMatriz("Matriz B", matrizB);
    imprimirMatriz("Resultado de la suma", resultado);

    return 0;
}