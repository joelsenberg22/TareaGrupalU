#include <iostream>
#include <sstream>
#include <iomanip>

using namespace std;

void convertirDecimalAHexadecimal() {
    int numero;
    cout << "Ingrese un numero decimal: ";
    cin >> numero;

    stringstream ss;
    ss << hex << uppercase << numero; 
    string hexadecimal = ss.str();

    cout << "El numero " << numero << " en hexadecimal es: " << hexadecimal << endl;
}


