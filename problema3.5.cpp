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

#include <iostream>
#include <cmath>

int main() {
    double m, c, E;
    c = 2.997925e10; // Velocidad de la luz en m/s

    std::cout << "Ingrese la masa (en kg): ";
    std::cin >> m;

    E = m * std::pow(c, 2); // Ecuación de Einstein: E = mc^2
    E = std::pow(E, 3); // Elevar al cubo

    std::cout << "La energía resultante es: " << E << " Joules" << std::endl;

    return 0;
}
