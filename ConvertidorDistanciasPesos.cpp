#include <iostream>
using namespace std;

// Aqui utilizamos las funciones para la conversión
double kilometrosAMillas(double km) {
    return km * 0.621371;
}

double millasAKilometros(double mi) {
    return mi / 0.621371;
}

double metrosAPulgadas(double mts) {
    return mts * 39.3701;
}

double pulgadasAMetros(double in) {
    return in / 39.3701;
}

double librasAKilos(double lbs) {
    return lbs * 0.453592;
}

double kilosALibras(double kg) {
    return kg / 0.453592;
}

int main() {
    int opcion;
    double valor;

    do {
        cout << "--------------------------------- CONVERSOR DE UNIDADES ----------------------------------" << endl;
        cout << "-------------------- Seleccione cualquiera de las opciones a utilizar ----------------------" << endl;
        cout <<"_____________________Presione 1. para convertir  de Kilometros a Millas_____________________" << endl;
        cout << "_____________________Presione 2. para convertir  de Millas a Kilometros_____________________" << endl;
        cout << "_____________________Presione 3. para convertir  de Metros a Pulgadas_____________________" << endl;
        cout << "_____________________Presione 4. para convertir  de Pulgadas a Metros_____________________" << endl;
        cout << "_____________________Presione 5. para convertir  de Libras a Kilos_____________________" << endl;
        cout << "_____________________Presione 6. para convertir  de Kilos a Libras_____________________" << endl;
        cout << "______________________________Presione 0. Salir del menu_____________________" << endl;
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Ingrese los kilómetros que desea convertir : ";
                cin >> valor;
                cout << "Equivale a " << kilometrosAMillas(valor) << " millas." << endl;
                break;
            case 2:
                cout << "Ingrese las millas que desea convertir: ";
                cin >> valor;
                cout << "Equivale a " << millasAKilometros(valor) << " kilómetros." << endl;
                break;
            case 3:
                cout << "Ingrese los metros que desea convertir: ";
                cin >> valor;
                cout << "Equivale a " << metrosAPulgadas(valor) << " pulgadas." << endl;
                break;
            case 4:
                cout << "Ingrese las pulgadas que desea convertir: ";
                cin >> valor;
                cout << "Equivale a " << pulgadasAMetros(valor) << " metros." << endl;
                break;
            case 5:
                cout << "Ingrese las libras que desea convertir: ";
                cin >> valor;
                cout << "Equivale a " << librasAKilos(valor) << " kilogramos." << endl;
                break;
            case 6:
                cout << "Ingrese los kilogramos que desea convertir: ";
                cin >> valor;
                cout << "Equivale a " << kilosALibras(valor) << " libras." << endl;
                break;
            case 0:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opción no válida. Intente nuevamente." << endl;
        }
    } while (opcion != 0);

    return 0;
}

