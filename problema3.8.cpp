#include <iostream>
using namespace std;

int main() {
    // Definir los valores de los billetes y monedas
    int billetes[] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
    int monedas[] = {50, 20, 10, 5, 2, 1};
    int cantidad;

    // Solicitar al usuario la cantidad en euros
    cout << "Ingrese la cantidad en euros: ";
    cin >> cantidad;

    // Realizar la conversión en billetes
    cout << "Cambio en billetes:\n";
    for (int i = 0; i < 9; i++) {
        int numBilletes = cantidad / billetes[i];
        cantidad %= billetes[i];
        if (numBilletes > 0) {
            cout << billetes[i] << " euros: " << numBilletes << endl;
        }
    }

    // Realizar la conversión en monedas
    cout << "\nCambio en monedas:\n";
    for (int i = 0; i < 6; i++) {
        int numMonedas = cantidad / monedas[i];
        cantidad %= monedas[i];
        if (numMonedas > 0) {
            cout << monedas[i] << " céntimos: " << numMonedas << endl;
        }
    }

    return 0;
}
