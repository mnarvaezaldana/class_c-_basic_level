#include <iostream>

using namespace std;

int main() {

    int control;

    cout << "Digite un número entre el 1 y el 5" << endl;
    cin >> control;

    switch (control) {
    case 1:
        cout << "Selecciono la opcion 1" << endl;
        break;
    case 2:
        cout << "Selecciono la opcion 2" << endl;
        break;
    case 3:
        cout << "Selecciono la opcion 3" << endl;
        break;
    case 4:
        cout << "Selecciono la opcion 4" << endl;
        break;
    case 5:
        cout << "Selecciono la opcion 5" << endl;
        break;
    default:
        cout << "Error 256, el valor es invalido" << endl;
        break;
    }

    return 0;
}