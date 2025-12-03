#include <iostream>
#include <string>

using namespace std;

// Sobrecarga de funciones
// no se pueden sobrecargar funciones que diferencian solo del valor devuelto

void saludar() {
    cout << "Hola, invitado" << endl;
}

void saludar(string nombre) {
    cout << "Hola " << nombre << endl;
}

void saludar(string nombre, string apellidoP) {
    cout << "Hola " << nombre << " " << apellidoP << endl;
}

void saludar(string nombre, string apellidoP, string apellidoM) {
    cout << "Hola " << nombre << " " << apellidoP << " " << apellidoM << endl;
}

int main() {




    return 0;
}