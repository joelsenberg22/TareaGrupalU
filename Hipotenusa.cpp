#include <iostream>
#include <cmath>

using namespace std;

void calcularHipotenusa() {
    double a, b;
    cout << "Ingrese el cateto a: " << endl;
    cin >> a;
    cout << "Ingrese el cateto b: " << endl;
    cin >> b;

    double hipotenusa = sqrt(a * a + b * b);
    cout << "La hipotenusa es: " << hipotenusa << endl;
}


