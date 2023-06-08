#include <iostream>

int main() {
    int hectometros, decametros, metros;

    // Solicitar los datos de entrada al usuario
    std::cout << "Introduce la longitud del perímetro del terreno: " << std::endl;
    std::cout << "Hectómetros: ";
    std::cin >> hectometros;
    std::cout << "Decámetros: ";
    std::cin >> decametros;
    std::cout << "Metros: ";
    std::cin >> metros;

    // Calcular el perímetro en decímetros
    int perimetro_decimetros = hectometros * 10000 + decametros * 10 + metros / 10;

    // Mostrar el resultado
    std::cout << "El perímetro del terreno en decímetros es: " << perimetro_decimetros << std::endl;

    return 0;
}
