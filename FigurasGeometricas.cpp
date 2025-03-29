#include <iostream>
#include <cmath>
#include <algorithm>  // Para std::min y std::max
using namespace std;

void figurasGeometricas() {
    int figura;

    cout << "Seleccione la figura a dibujar:" << endl;
    cout << "1. Circulo" << endl;
    cout << "2. Rectangulo" << endl;
    cout << "3. Triangulo" << endl;
    cout << "Ingrese una opcion: ";
    cin >> figura;

    if (figura == 1) {
        // Dibuja un círculo con centro en (10,10) y radio 5
        cout << "Circulo:" << endl << endl;
        int h = 10, k = 10, r = 5;
        for (int y = k - r; y <= k + r; ++y) {
            for (int x = h - r; x <= h + r; ++x) {
                int distancia = static_cast<int>(sqrt(pow(x - h, 2) + pow(y - k, 2)));
                if (distancia <= r) {
                    cout << "*";
                } else {
                    cout << " ";
                }
            }
            cout << endl;
        }
    } else if (figura == 2) {
        // Dibuja un rectángulo de las coordenadas (5,5) a (15,10)
        cout << "Rectangulo:" << endl << endl;
        int x1 = 5, y1 = 5, x2 = 15, y2 = 10;
        for (int y = y1; y <= y2; ++y) {
            for (int x = x1; x <= x2; ++x) {
                cout << "*";
            }
            cout << endl;
        }
    } else if (figura == 3) {
        // Dibuja un triángulo con los vértices en (5,5), (10,15), (15,5)
        cout << "Triangulo:" << endl << endl;
        int x1 = 5, y1 = 5, x2 = 10, y2 = 15, x3 = 15, y3 = 5;

        int ymin = std::min(std::min(y1, y2), y3);
        int ymax = std::max(std::max(y1, y2), y3);
        int xmin = std::min(std::min(x1, x2), x3);
        int xmax = std::max(std::max(x1, x2), x3);

        for (int y = ymin; y <= ymax; ++y) {
            for (int x = xmin; x <= xmax; ++x) {

                int area1 = (x1 - x2) * (y - y2) - (x - x2) * (y1 - y2);
                int area2 = (x2 - x3) * (y - y3) - (x - x3) * (y2 - y3);
                int area3 = (x3 - x1) * (y - y1) - (x - x1) * (y3 - y1);

                bool dentroDelTriangulo = (area1 >= 0 && area2 >= 0 && area3 >= 0) || (area1 <= 0 && area2 <= 0 && area3 <= 0);
                if (dentroDelTriangulo) {
                    cout << "*";
                } else {
                    cout << " ";
                }
            }
            cout << endl;
        }
    } else {
        cout << "Opción no válida para figura." << endl;
    }
}
