#include <iostream>
#include <cmath>
#include <algorithm>  // Para std::min y std::max
using namespace std;

void dibujarCirculo(int h, int k, int r) {
    cout << "Circulo:" << endl<<endl;  
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
}

void dibujarRectangulo(int x1, int y1, int x2, int y2) {
    cout << "Rectangulo:" << endl<<endl;
    for (int y = y1; y <= y2; ++y) {
        for (int x = x1; x <= x2; ++x) {
            cout << "*";  
        }
        cout << endl;
    }
}

void dibujarTriangulo(int x1, int y1, int x2, int y2, int x3, int y3) {
    cout << "Triangulo:" << endl;  
        cout << endl;

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
}

int main() {
    dibujarCirculo(10, 10, 5);

    cout << endl;
    dibujarRectangulo(5, 5, 15, 10);
    cout << endl;

    dibujarTriangulo(5, 5, 10, 15, 15, 5);

    return 0;
}

