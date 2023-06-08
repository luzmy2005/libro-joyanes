#include <iostream>

int main() {
    int numero;

    std::cout << "Ingrese un número entero: ";
    std::cin >> numero;

    int doble = numero * 2;
    int triple = numero * 3;

    std::cout << "El doble de " << numero << " es: " << doble << std::endl;
    std::cout << "El triple de " << numero << " es: " << triple << std::endl;

    return 0;
}
