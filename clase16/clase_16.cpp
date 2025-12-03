#include <iostream>

using namespace std;

// arreglo y vectores

int main() {

    // para crear arreglos, tipo de dato + nombre + tamaño de colección
    // tipo nombre[tamaño]

    int numeros[12]; // esta es la manera antigua

    int numerosSegunda[5] = {10, 20, 30, 40, 50}; // se usa de esta manera si sabemos cuál va a ser la cantidad de items
    int numerosTercera[] = {10, 20, 30, 40, 50}; // se usa de esta manera si no sabemos cuál va a ser la cantidad de items

    cout << "El valor numero 3 es " << numeros[3] << endl;


    float calificaciones[5];

    cout << "Ingrese las calificaciones" << endl;

    for(int i = 0; i < 5; i++) {
        cin >> calificaciones[i];
    }

    for (float numero : calificaciones) {
        cout << "la calificacion es " << numero << endl;
    }

    return 0;
}