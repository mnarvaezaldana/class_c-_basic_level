#include <iostream>

using namespace std;
int main() {

    int control;

    cout << "Menu de opciones" << endl;
    cout << "1 - Suma 2 numeros" << endl;
    cout << "2 - Resta 2 numeros" << endl;
    cout << "3 - Cuadrado de un numero" << endl;
    cin >> control;

    switch (control) {
        case 1: {
            int N1, N2;
            cout << "Selecciono la opcion suma de dos numeros, Ingrese los numeros a sumar: " << endl;
            cin >> N1 >> N2;
            cout << "El resultado es de: " << N1 + N2 << endl;
            break;
        }
        case 2: {
            int N1, N2;
            cout << "Selecciono la opcion Resta de dos numeros, Ingrese los numeros a restar: " << endl;
            cin >> N1 >> N2;
            cout << "El resultado es de: " << N1 - N2 << endl;
            break;
        }
        case 3: {
            int N1, N2;
            cout << "Selecciono la opcion cuadrado de un numero, Ingrese el numero: " << endl;
            cin >> N1;
            cout << "El resultado es de: " << N1 * N1 << endl;
            break;
        }
        default: {
            cout << "Error 256, el valor es invalido" << endl;
            break;
        }
    }

    return 0;
}