#include <iostream>
using namespace std;

void problema2() {
    int numero;
    int contador = 0;
    double suma = 0.0;

    cout << "Ingrese enteros positivos (-1 para terminar):\n";
    cin >> numero;

    while (numero != -1) {
        if (numero >= 0) {
            suma += numero;
            contador++;
        }
        cin >> numero;
    }

    if (contador > 0) {
        cout << "Promedio: " << (suma / contador) << "\n";
    } else {
        cout << "No se ingresaron numeros.\n";
    }
}

int main() {
    problema2();
    return 0;
}