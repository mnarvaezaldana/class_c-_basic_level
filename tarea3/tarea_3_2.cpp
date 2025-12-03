#include <iostream>

using namespace std;

int main() {

    bool primerBoleano = true, segundoBoleano = false, tercerBoleano = true;

    if (primerBoleano && segundoBoleano) {
        cout << "Ambas variables boleanas son true" << endl;
    } else {
        cout << "Al menos una de las variables boleanas es false" << endl;
    }

    if (segundoBoleano || tercerBoleano) {
        cout << "Al menos una de las variables boleanas es true" << endl;
    } else {
        cout << "Ambas variables boleanas son false" << endl;
    }

    if (!primerBoleano && !tercerBoleano) {
        cout << "Ambas variables boleanas son false" << endl;
    } else {
        cout << "Al menos una de las variables boleanas es true" << endl;
    }

    return 0;
}