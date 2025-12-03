#include <iostream>

using namespace std;

// Los arreglos se almacenan en la memoria de manera contigua

int main() {

    float ventas[7];
    float suma = 0.0f, promedio;

    cout << "Ingrese las ventas del día (7 días)" << endl;

    for (int i = 0; i < 7; i++) {
        cin >> ventas[i];
        suma += ventas[i];
    }

    promedio = suma / 7;

    cout << "El promedio correspondiente es " << promedio << endl;

    float nombres[3][3] = {
        {10,20,30},
        {40,50,60},
        {70,80,90}
    };

    cout << nombres[1][1];

    int ejemplo = 0;
    cout << sizeof(ejemplo);

    return 0;
}