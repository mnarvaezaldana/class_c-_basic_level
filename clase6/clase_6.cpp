#include <iostream>
#include <string>

using namespace std;

int main() {

    bool control = true;
    int aux = 1;

    while (control) {
        cout << "Ejecución N" << aux << endl;
        aux++;
        if (aux >= 10) {
            int salir = 0;
            cout << "Desea continuar (1-S, 2-N)" << endl;
            cin >> salir;

            if (salir == 1) {
                control = false;
            }
        }
    }

    return 0;
}