#include <iostream>

int main() {
    double c = 2.997925e10; // Velocidad de la luz en m/s^2

    // Leer la masa en gramos
    double masaGramos;
    std::cout << "Ingrese la masa en gramos: ";
    std::cin >> masaGramos;

    // Convertir la masa de gramos a kilogramos
    double masaKg = masaGramos / 1000.0;

    // Calcular la energía en ergios
    double energia = masaKg * c * c;

    std::cout << "La cantidad de energía producida es: " << energia << " ergios" << std::endl;

    return 0;
} // ELEVAR EL RESULTADO AL CUBO
