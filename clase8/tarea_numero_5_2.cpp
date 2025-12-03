#include <iostream>

using namespace std;

int main() {

    int valor;

    do {
        cout << "Ingrese valor a evaluar" << endl;
        cin >> valor;

    } while (valor <= 100);

    cout << "Ha terminado el cliclo" << endl;

    return 0;
}