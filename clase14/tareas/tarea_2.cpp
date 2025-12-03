#include <iostream>

using namespace std;

void holaMundo();
void mostrarEdad(string nombre, int edad);
void despedida(string nombre);

int main() {

    holaMundo();
    mostrarEdad("Marcos", 39);
    despedida("Marcos");

    return 0;
}

void holaMundo() {
    cout << "Hola mundo" << endl;
}

void mostrarEdad(string nombre, int edad) {
    cout << "Hola " << nombre << ", con " << edad << " años de edad." << endl;
}

void despedida(string nombre) {
    cout << "Adiós " << nombre << " , Gracias por usar este programa" << endl;
}
