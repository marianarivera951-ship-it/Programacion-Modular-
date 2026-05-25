#include <iostream>

using namespace std;

int main() {
    int suma = 0;
    long double producto = 1.0;
    int contador = 0;
    
    // 1. Calcular suma, producto y cantidad de números
    for (int i = 20; i <= 400; i += 2) {
        suma += i;
        producto *= i;
        contador++;
    }
    
    double promedio = (double)suma / contador;
    
    // 2. Contar cuántos son mayores que el promedio
    int mayores_que_promedio = 0;
    for (int i = 20; i <= 400; i += 2) {
        if (i > promedio) {
            mayores_que_promedio++;
        }
    }
    
    // Mostrar resultados
    cout << "=== ANÁLISIS DE NÚMEROS PARES (20 - 400) ===" << endl << endl;
    cout << "Suma total: " << suma << endl;
    cout << "Producto total: " << producto << endl;
    cout << "Promedio: " << promedio << endl;
    cout << "Cantidad de pares mayores que el promedio: " << mayores_que_promedio << endl;
    
    return 0;
}