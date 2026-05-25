#include <iostream>

using namespace std;

int main() {
    int total_minutos;
    
    cout << "Ingrese la cantidad de tiempo en minutos: ";
    cin >> total_minutos;
    
    int dias = total_minutos / 1440;
    int minutos_restantes = total_minutos % 1440; 
    
    int horas = minutos_restantes / 60;
    int minutos_finales = minutos_restantes % 60;
    
    cout << endl << "=== EQUIVALENCIA DE TIEMPO ===" << endl;
    cout << total_minutos << " minutos equivalen a:" << endl;
    cout << "- Dias: " << dias << endl;
    cout << "- Horas: " << horas << endl;
    cout << "- Minutos: " << minutos_finales << endl;
    
    return 0;
}