#include <iostream>
#include <sstream>  // Para usar stringstream
#include <string>
using namespace std;

int contarPalabras(const string &frase) {
    int contador = 0;
    stringstream ss(frase);
    string palabra;

    while (ss >> palabra) {
        contador++;
    }

    return contador;
}

void ejecutarContarPalabras() {
    string frase;

    cout << "Ingresa una frase: ";
    getline(cin, frase);  // Leer la frase completa, incluyendo los espacios
    int totalPalabras = contarPalabras(frase);  // Llamar a la función que cuenta las palabras
    cout << "La frase contiene " << totalPalabras << " palabra(s)." << endl;
}
