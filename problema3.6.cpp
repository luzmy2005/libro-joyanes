#include <iostream>
#include <cmath>

int main() {
    float pies, yardas, pulgadas, centimetros, metros;

    std::cout << "Ingrese la medida en pies: ";
    std::cin >> pies;

    yardas = pies / 3.0;
    pulgadas = pies * 12.0;
    centimetros = pulgadas * 2.54;
    metros = centimetros / 100.0;

    std::cout << "Equivalente en yardas: " << yardas << std::endl;
    std::cout << "Equivalente en pulgadas: " << pulgadas << std::endl;
    std::cout << "Equivalente en centímetros: " << centimetros << std::endl;
    std::cout << "Equivalente en metros: " << metros << std::endl;

    return 0;
}