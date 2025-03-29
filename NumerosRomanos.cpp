// NumerosRomanos.cpp
#include <iostream>
#include <string>

using namespace std;

string convertirARomano(int num) {
    string romano = "";
    
    // Definir los valores romanos para los números
    struct valorRomano {
        int valor;
        string simbolo;
    };
    
    valorRomano valores[] = {
        {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
        {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"},
        {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"},
        {1, "I"}
    };
    
    // Convertir el número arábigo a romano
    for (int i = 0; i < 13; i++) {
        while (num >= valores[i].valor) {
            romano += valores[i].simbolo;
            num -= valores[i].valor;
        }
    }
    
    return romano;
}

void arabigoRomano() {
    int numero;
    
    cout << "Introduce un numero arabigo: ";
    cin >> numero;
    
    if (numero <= 0) {
        cout << "Por favor, ingresa un numero positivo mayor que cero." << endl;
    } else {
        string romano = convertirARomano(numero);
        cout << "El numero " << numero << " en romano es: " << romano << endl;
    }
}

