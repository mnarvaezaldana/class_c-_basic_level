#include "operacionesmatematicas.h";
#include <iostream>
// este es el código fuente

using namespace std;

// double PI = 3.1416; sí va aquí entonces solo será usado de manera interna

int sumar(int numero1, int numero2) {
    return numero1 + numero2;
}

void saludar(string nombre) {
    cout << "Hola " << nombre << endl;
}


// es buena práctica tener un solo archivo fuente por cada clase