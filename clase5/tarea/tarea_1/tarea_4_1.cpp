#include <iostream>
using namespace std;

int main() {
    int valor;
    cout << "Ingrese el numero del dia que quiere seleccionar" << endl;
    cin >> valor;

    switch(valor) {
        case 1: {
            cout << "Selecciono el Lunes" << endl;
            break;
        } 
        case 2: {
            cout << "Selecciono el Martes" << endl;
            break;
        }
        case 3: {
            cout << "Selecciono el Miercoles" << endl;
            break;
        }
        case 4: {
            cout << "Selecciono el Jueves" << endl;
            break;
        }
        case 5: {
            cout << "Selecciono el Viernes" << endl;
            break;
        }
        case 6: {
            cout << "Selecciono el Sabado" << endl;
            break;
        }
        case 7: {
            cout << "Selecciono el Domingo" << endl;
            break;
        }
        default: {
            cout << "Selecciono un valor no valido" << endl;
            break;
        }
    }

    return 0;
}