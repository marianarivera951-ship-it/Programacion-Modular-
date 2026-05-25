#include <iostream>

using namespace std;

void problema1() {
    int contador = 0;
    int numero;
    double suma = 0.0;

    cout << "\n--- Ejecutando Problema 1 ---\n";
    cout << "Ingrese 10 numeros enteros:\n";
    
    while (contador < 10) {
        cout << "Numero " << (contador + 1) << ": ";
        cin >> numero;
        suma += numero;
        contador++;
    }

    cout << "El promedio es: " << (suma / 10.0) << "\n";
}

int main() {
    int opcion;

    do {
        cout << "\n=== MENU ===\n1. Problema 1\n8. Salir\nOpcion: ";
        cin >> opcion;

        if (opcion == 1) {
            cin.ignore(); // LIMPIA EL BUFFER para que te deje escribir los 10 números
            problema1();
        }

    } while (opcion != 8);

    return 0;
}
