#include <iostream>

using namespace std;

void tablaMultiplicar() {
    int numero;
    cout << "Ingrese la Tabla de multiplicar que desea: ";
    cin >> numero;

    cout << "Tabla de multiplicar del " << numero << ":" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << numero << " x " << i << " = " << numero * i << endl;
    }
}


