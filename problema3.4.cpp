#include <iostream>
using namespace std;

int main() {
    double m1, m2, d, F, G;

    // Lectura de las masas y la distancia
    cout << "Ingrese la masa del cuerpo 1 (en gramos): ";
    cin >> m1;
    cout << "Ingrese la masa del cuerpo 2 (en gramos): ";
    cin >> m2;
    cout << "Ingrese la distancia entre los cuerpos (en centímetros): ";
    cin >> d;

    // Cálculo de la fuerza gravitacional
    G = 6.673e-8; // Constante de gravedad universal en cm^3/g*seg^2
    F = G * m1 * m2 / (d * d);

    // Imprimir el resultado
    cout << "La fuerza gravitacional entre los cuerpos es: " << F << " dinas" << endl;

    return 0;
}