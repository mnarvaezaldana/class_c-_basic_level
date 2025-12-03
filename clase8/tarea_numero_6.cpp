#include <iostream>

enum class Colores {
    ROJO = 1,
    VERDE = 2,
    AZUL = 3
};

using namespace std;

int main() {

    Colores color = Colores::AZUL;
    int valor = static_cast<int>(color);

    switch (valor) {
        case 1: {
            cout << "El color es Rojo" << endl;
            break;
        }

        case 2: {
            cout << "El color es Verde" << endl;
            break;
        }

        case 3: {
            cout << "El color es Azul" << endl;
            break;
        }

        default: {
            cout << "No se encontró el color" << endl;
            break;
        }
    }

    return 0;
}