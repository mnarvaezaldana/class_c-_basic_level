//
// Created by Marcos Armando on 10/12/25.
//
#include <iostream>
#include "tarea_12.h"

using namespace std;

int obtenerTemperaturaMaxima(int temperaturas[]);
int obtenerTemperaturaMinima(int temperaturas[]);
void reporteFinal(int temperaturaMaxima, int temperaturaMinima, int diferencia);

int main() {

    cout << "¡Bienvenidos al programa de captura de temperaturas!" << endl;
    int temperaturas[5], temperaturaMaxima, temperaturaMinima, diferencia;

    for (int i = 0; i < 5; i++) {
        cout << "Ingrese la temperatura para el registro: " << i + 1 << endl;
        cin >> temperaturas[i];
    }

    temperaturaMaxima = obtenerTemperaturaMaxima(temperaturas);
    temperaturaMinima = obtenerTemperaturaMinima(temperaturas);

    diferencia = temperaturaMaxima - temperaturaMinima;

    reporteFinal(temperaturaMaxima, temperaturaMinima, diferencia);

    return 0;
}

int obtenerTemperaturaMaxima(int temperaturas[]) {
    int maxima = temperaturas[0];

    for (int i = 1; i < 5; i++) {
        if (maxima < temperaturas[i]) {
            maxima = temperaturas[i];
        }
    }

    return maxima;
};

int obtenerTemperaturaMinima(int temperaturas[]) {
    int minima = temperaturas[0];

    for (int i = 1; i < 5; i++) {
        if (minima > temperaturas[i]) {
            minima = temperaturas[i];
        }
    }

    return minima;
};

void reporteFinal(int temperaturaMaxima, int temperaturaMinima, int diferencia) {
    cout << "Se ha encontrado que la temperatura maxima es: " << temperaturaMaxima << endl;
    cout << "Se ha encontrado que la temperatura minima es: " << temperaturaMinima << endl;
    cout << "Se ha encontrado que la diferencia entre temperaturas es: " << diferencia << endl;
}