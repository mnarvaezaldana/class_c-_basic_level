#include <iostream>

using namespace std;

int sumar(int numero1, int numero2);
double sumar(double numero1, double numero2);

int main() {

    int sumaEnteros = sumar(5, 9);
    double sumaDoubles = sumar(7.9, 9.7);

    cout << "El resultado por sumar enteros es: " << sumaEnteros << endl;
    cout << "El resultado por sumar doubles es: " << sumaDoubles << endl;

    return 0;
}

int sumar(int numero1, int numero2) {
    return numero1 + numero2;
}

double sumar(double numero1, double numero2) {
    return numero1 + numero2;
}