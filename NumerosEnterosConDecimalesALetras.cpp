#include <iostream>
#include <string>
#include <sstream>
#include <cmath>

using namespace std;

// Arreglos de palabras para unidades, decenas, centenas y números especiales
string unidades[] = {"", "uno", "dos", "tres", "cuatro", "cinco", "seis", "siete", "ocho", "nueve"};
string especiales[] = {"diez", "once", "doce", "trece", "catorce", "quince", "dieciséis", "diecisiete", "dieciocho", "diecinueve"};
string decenas[] = {"", "", "veinte", "treinta", "cuarenta", "cincuenta", "sesenta", "setenta", "ochenta", "noventa"};
string centenas[] = {"", "ciento", "doscientos", "trescientos", "cuatrocientos", "quinientos",
                     "seiscientos", "setecientos", "ochocientos", "novecientos"};

// Convierte números menores a 1000 a letras
string convertirMenorMil(int numero) {
    string resultado = "";

    if (numero == 0) return "";

    if (numero == 100) return "cien";

    int cent = numero / 100;
    int dec = (numero % 100) / 10;
    int uni = numero % 10;

    if (cent > 0) {
        resultado += centenas[cent] + " ";
    }

    int dosUltimos = numero % 100;

    if (dosUltimos >= 10 && dosUltimos < 20) {
        resultado += especiales[dosUltimos - 10];
    } else {
        if (dec > 0) {
            resultado += decenas[dec];
            if (uni > 0) {
                if (dec == 2) resultado += "i" + unidades[uni]; // veintiuno, veintidos
                else resultado += " y " + unidades[uni];       // treinta y uno, etc.
            }
        } else {
            resultado += unidades[uni];
        }
    }

    return resultado;
}

// Convierte cualquier numero entero hasta los millones a letras
string convertirNumero(int numero) {
    if (numero == 0) return "cero";

    string resultado = "";

    // Extraemos millones, miles y unidades
    int millones = numero / 1000000;
    int miles = (numero % 1000000) / 1000;
    int resto = numero % 1000;

    // Parte de millones
    if (millones > 0) {
        if (millones == 1) resultado += "un millon ";
        else resultado += convertirMenorMil(millones) + " millones ";
    }

    // Parte de miles
    if (miles > 0) {
        if (miles == 1) resultado += "mil ";
        else resultado += convertirMenorMil(miles) + " mil ";
    }

    // Parte de unidades
    if (resto > 0) {
        resultado += convertirMenorMil(resto);
    }

    return resultado;
}

// Convierte el numero completo con parte decimal a letras
string numeroALetras(double numero) {
    int entero = (int)numero;                    // Parte entera
    int decimal = round((numero - entero) * 100); // Parte decimal

    string resultado = convertirNumero(entero);  // Convertir parte entera

    // Agregamos la parte decimal
    resultado += " con ";
    if (decimal == 0) {
        resultado += "cero centimos";
    } else {
        resultado += convertirMenorMil(decimal) + " centimos";
    }

    return resultado;
}

// Funcion principal
int main() {
    double numero;

    cout << "Ingrese un numero entero con decimales: ";
    cin >> numero;

    // Mostramos el resultado en letras
    string letras = numeroALetras(numero);
    cout << "En letras: " << letras << endl;

    return 0;
}

