#include <iostream>
#include <cstdlib>  // Para usar system("cls")
using namespace std;

void operacionesMatematicas() {
    double num1, num2;
    int opcion;

    cout << endl;
    cout << "Seleccione una opcion:" << endl;
    cout << "1. Sumar" << endl;
    cout << "2. Restar" << endl;
    cout << "3. Multiplicar" << endl;
    cout << "4. Dividir" << endl;
    cout << "5. Salir" << endl;
    cout << "Opcion: ";
    cin >> opcion;

    if (opcion >=1 && opcion <=4) {
        cout << "Introduce el primer numero: ";
        cin >> num1;
        cout << "Introduce el segundo numero: ";
        cin >> num2;
    }

    switch (opcion) {
        case 1: {
            double suma = num1 + num2;
            cout << "Suma: " << suma << endl;
            break;
        }
        case 2: {
            double resta = num1 - num2;
            cout << "Resta: " << resta << endl;
            break;
        }
        case 3: {
            double multiplicacion = num1 * num2;
            cout << "Multiplicacion: " << multiplicacion << endl;
            break;
        }
        case 4: {
            if (num2 != 0) {
                double division = num1 / num2;
                cout << "Division: " << division << endl;
            } else {
                cout << "No se puede dividir por cero." << endl;
            }
            break;
        }
        case 5: {
            cout << "Saliendo del programa..." << endl;
            break;
        }
        default:
            cout << "Opcion invalida. Por favor elige una opcion valida." << endl;
    }

    cin.get();     // Esperar a que el usuario presione Enter

}

