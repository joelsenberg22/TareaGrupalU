#include <iostream>
#include <sstream> // Para usar stringstream
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

int main() {
    string frase;

    cout << "Ingresa una frase: ";
    getline(cin, frase);
    int totalPalabras = contarPalabras(frase);
    cout << "La frase contiene " << totalPalabras << " palabra(s)." << endl;

    return 0;
}

