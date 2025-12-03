#include <iostream>
#include <string>

using namespace std;

float multiplicarDosNumeros(float numero1, float numero2);
void saludar(string nombre);

// pass by value, works for primitive types
void incrementar(int x) {
    x += 1;
}

// pass by reference, 
void incrementarReferencia(int& x) {
    x += 1;
}

// pass by reference constante, 
void incrementarReferenciaConstante(const int& x) {
    x;
}

// pass by puntero
void incrementarPorPuntero(int *x) {
    x += 1;
}

int potenciaValor(float numero, int potencia) {
    float resultado = numero;
    for (int i = 2; i <= potencia; i++) {
        resultado *= numero;
    }
    return resultado;
}

void mensaje(string nombre) {
    if (nombre.empty()) {
        cout << "Ingrese un nombre antes de saludar" << endl;
        return;
    }
    cout << "Hola bienvenido: " << nombre << endl;
}

int main () {

    int numero = 5;
    incrementar(numero);

    incrementarReferencia(numero);

    incrementarPorPuntero(&numero);

    cout << numero << endl;

    return 0;
}

float multiplicarDosNumeros(float numero1, float numero2) {
    float resultado = numero1 * numero2;
    return resultado;
}

void saludar(string nombre) {
    cout << "Hola " << nombre << endl;
}