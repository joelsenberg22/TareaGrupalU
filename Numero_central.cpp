#include <iostream>
using namespace std;

void encontrarNumeroCentral() {
    // Declaración de variables
    int num1, num2, num3, central;
    
    // Entrada de datos
    cout << "Ingrese el primer numero: " << endl;
    cin >> num1;
    cout << "Ingrese el segundo numero: " << endl;
    cin >> num2;
    cout << "Ingrese el tercer numero: " << endl;
    cin >> num3;
    
    // Comparaciones para encontrar el número central
    if ((num1 > num2 && num1 < num3) || (num1 > num3 && num1 < num2)) {
        central = num1;
    } else if ((num2 > num1 && num2 < num3) || (num2 > num3 && num2 < num1)) {
        central = num2;
    } else {
        central = num3;
    }
    
    // Salida de resultados
    cout << "El número central es: " << central << endl;
}




