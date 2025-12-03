#include <iostream>

using namespace std;

enum class Colores {
    ROJO = 1,
    VERDE = 2,
    AZUL = 3
};

int main() {

    int valorColor;
    cout << "Ingrese un número correspondinete al color deseado" << endl;
    cin >> valorColor;

    Colores miColor = static_cast<Colores>(valorColor);

    switch (miColor) {
        case Colores::ROJO: {
            cout << "Seleccionaste el color rojo" << endl;
            break;
        }
        case Colores::VERDE: {
            cout << "Seleccionaste el color verde" << endl;
            break;
        }
        case Colores::AZUL: {
            cout << "Seleccionaste el color azul" << endl;
            break;
        }        
        default: {
            cout << "Selecciono un número no válido" << endl;
            break;
        }
    }

    return 0;
}