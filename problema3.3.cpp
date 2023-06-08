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
}
