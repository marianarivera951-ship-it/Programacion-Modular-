#include <iostream>

using namespace std;

int main() {
    
    long long resultado = 1; 
    
    cout << "=== PRIMERAS 20 POTENCIAS DE 4 ===" << endl << endl;
    
    for (int i = 1; i <= 20; i++) {
        resultado *= 4; // Multiplica el acumulador por 4 en cada iteración
        cout << "4^" << i << " = " << resultado << endl;
    }
    
    return 0;
}