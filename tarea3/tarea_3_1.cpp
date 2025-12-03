#include <iostream>

using namespace std;

int main() {

    int valorUno = 4, valorDos = 40;

    if (valorUno == valorDos) {
        cout << "Los valores son iguales" << endl;
    }
    
    if (valorUno != valorDos) {
        cout << "Los valores son diferentes" << endl;
    } 

    if (valorUno < valorDos) {
        cout << "El valorUno es menor que el valorDos" << endl;
    }

    if (valorUno > valorDos) {
        cout << "El valorUno es mayor que el valorDos" << endl;
    }

    if (valorUno <= valorDos) {
        cout << "El valorUno es menor o igual que el valorDos" << endl;
    }

    if (valorUno >= valorDos) {
        cout << "El valorUno es mayor o igual que el valorDos" << endl;
    }

    return 0;
}