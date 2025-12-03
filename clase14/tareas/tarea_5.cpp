#include <iostream>

using namespace std;

void mostrar(int numero);
void mostrar(string valor);

int main() {
    
    mostrar(7);
    mostrar("Bienvenidos");

    return 0;
}

void mostrar(int numero) {
    cout << "El valor a mostrar es " << numero << endl;
}

void mostrar(string valor) {
    cout << "El valor a mostrar es " << valor << endl;
}