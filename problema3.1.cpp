#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, h;

    // Lectura de las longitudes de los lados
    cout << "Ingrese la longitud del lado a: ";
    cin >> a;

    cout << "Ingrese la longitud del lado b: ";
    cin >> b;

    // Cálculo de la hipotenusa
    h = sqrt(pow(a, 2) + pow(b, 2));

    // Mostrar el resultado
    cout << "La hipotenusa es: " << h << endl;

    return 0;
}
