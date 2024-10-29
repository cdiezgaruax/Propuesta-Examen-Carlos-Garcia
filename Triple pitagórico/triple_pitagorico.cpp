#include <iostream>
#include <cmath>
#include "triple_pitagorico.h"

// Función para imprimir triples pitagóricos
void Pitagoricos() {
    std::cout << "Los triples pitagoricos son:" << std::endl;

    // Iterar a través de valores potenciales para el primer lado del triángulo (a)
    for (int a = 1; a <= 20; a++) {
        // Iterar a través de valores potenciales para el segundo lado del triángulo (b)
        for (int b = a; b <= 20; ++b) { // b comienza en 'a' para evitar duplicados
            // Calcular el tercer lado del triángulo (c)
            int c = static_cast<int>(sqrt(a * a + b * b));
            // Verificar si a^2 + b^2 == c^2
            if (a * a + b * b == c * c) {
                // Verificar si los tres lados forman un triángulo válido
                if (a + b > c && a + c > b && b + c > a) {
                    // Imprimir el triple pitagórico
                    std::cout << a << " - " << b << " - " << c << std::endl;
                }
            }
        }
    }
}
