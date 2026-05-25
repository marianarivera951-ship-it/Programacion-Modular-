#include <iostream>
using namespace std;

void problema3() {
    int nota;
    cout << "Ingrese calificacion (0-100): ";
    cin >> nota;

    if (nota < 0 || nota > 100) {
        cout << "Nota fuera de rango.\n";
        return;
    }

    switch (nota / 10) {
        case 10:
        case 9:  cout << "Calificacion: 'A'\n"; break;
        case 8:  cout << "Calificacion: 'B'\n"; break;
        case 7:  cout << "Calificacion: 'C'\n"; break;
        case 6:  cout << "Calificacion: 'D'\n"; break;
        default: cout << "Calificacion: 'F'\n"; break;
    }
}

int main() {
    problema3();
    return 0;
}
