#include <iostream>
#include <algorithm>
#include <cctype> // para tolower

using namespace std;

void verificarPalindromo() {
    string palabra;
    cout << "Ingrese una palabra: ";
    cin >> palabra;

    string original = palabra;

    // Convertir ambas cadenas a minúsculas
    transform(original.begin(), original.end(), original.begin(), ::tolower);
    transform(palabra.begin(), palabra.end(), palabra.begin(), ::tolower);

    // Invertir la palabra
    reverse(palabra.begin(), palabra.end());

    if (original == palabra) {
        cout << "La palabra es un palindromo." << endl;
    } else {
        cout << "La palabra no es un palindromo." << endl;
    }
}



