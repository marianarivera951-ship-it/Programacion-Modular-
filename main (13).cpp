#include <iostream>

using namespace std;

int main() {
    int numero;
    int mayor, menor;
    
    cout << "Ingrese el numero 1: ";
    cin >> numero;
    
    mayor = numero;
    menor = numero;
    
    for (int i = 2; i <= 100; i++) {
        cout << "Ingrese el numero " << i << ": ";
        cin >> numero;
        
        if (numero > mayor) {
            mayor = numero;
        }
        if (numero < menor) {
            menor = numero;
        }
    }
    
    cout << endl << "=== RESULTADOS ===" << endl;
    cout << "El numero mayor es: " << mayor << endl;
    cout << "El numero menor es: " << menor << endl;
    
    return 0;
}