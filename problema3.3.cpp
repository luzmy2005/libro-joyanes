#include <iostream>

using namespace std;

int main() {
    // Leer los coeficientes del sistema de ecuaciones
    double a, b, c, d, e, f;
    cout << "Ingrese los coeficientes a, b, c, d, e, f: ";
    cin >> a >> b >> c >> d >> e >> f;

    // Calcular la solución del sistema de ecuaciones
    double det = a * d - b * c;
    if (det == 0) {
        cout << "El sistema de ecuaciones no tiene solución única." << endl;
    } else {
        double x = (e * d - b * f) / det;
        double y = (a * f - e * c) / det;
        cout << "La solución del sistema de ecuaciones es: x = " << x << ", y = " << y << endl;
    }

    return 0;
} //MODIFICAR: SI EL RESULTADO FINAL DE "X" ES PAR, INCREMENTAR EN 2; SI EL RESULTADO FINAL DE "Y" ES IMPAR, INCREMENTAR EN 


#include <iostream>

int main() {
    // Declarar variables para los coeficientes a, b, c, d, e, f
    double a, b, c, d, e, f;

    // Leer los coeficientes a, b, c, d, e, f del usuario
    std::cout << "Ingrese el coeficiente a: ";
    std::cin >> a;
    std::cout << "Ingrese el coeficiente b: ";
    std::cin >> b;
    std::cout << "Ingrese el coeficiente c: ";
    std::cin >> c;
    std::cout << "Ingrese el coeficiente d: ";
    std::cin >> d;
    std::cout << "Ingrese el coeficiente e: ";
    std::cin >> e;
    std::cout << "Ingrese el coeficiente f: ";
    std::cin >> f;

    // Calcular el valor de x e y usando el sistema de ecuaciones
    double x = (c * e - b * f) / (a * e - b * d);
    double y = (a * f - c * d) / (a * e - b * d);

    // Verificar si x es par y actualizarlo si es el caso
    if (std::fmod(x, 2) == 0) {
        x += 2;
    }

    // Verificar si y es impar y actualizarlo si es el caso
    if (std::fmod(y, 2) != 0) {
        y += 3;
    }

    // Imprimir los valores finales de x e y
    std::cout << "El valor final de x es: " << x << std::endl;
    std::cout << "El valor final de y es: " << y << std::endl;

    return 0;
}
