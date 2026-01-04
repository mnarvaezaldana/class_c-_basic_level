//
// Created by Marcos Armando on 04/01/26.
//
#include <iostream>
#include <string>

using namespace std;

void bienvenida();
void ingresarGastos(int gastos[], int& total, int& gastoMayor);
string obtenerDia(int numeroDia);
void mensajeFinal(int total, int gastoMayor);

int main() {

    int total = 0, gastoMayor = 0;
    int gastos[7];

    bienvenida();
    ingresarGastos(gastos, total, gastoMayor);
    mensajeFinal(total, gastoMayor);

    return 0;
}

void bienvenida() {
    cout<<"Bienvenidos al programa de administración de gastos\n";
}

void ingresarGastos(int gastos[], int& total, int& gastoMayor) {
    for (int i=0; i<7; i++) {
        cout << "Ingrese los gastos para el dia " << obtenerDia(i) << " por favor: ";
        cin >> gastos[i];
        total += gastos[i];
        if (gastos[i] > gastoMayor) {
            gastoMayor = gastos[i];
        }
    }
}

string obtenerDia(int numeroDia) {
    switch (numeroDia) {
        case 0: return "Lunes";
        case 1: return "Martes";
        case 2: return "Miercoles";
        case 3: return "Jueves";
        case 4: return "Viernes";
        case 5: return "Sabado";
        case 6: return "Domingo";
        default: return "Error en el dia elegido";
    }
}

void mensajeFinal(int total, int gastoMayor) {
    double promedio = total / 7.0;
    cout << "El gasto total administrado en la semana es " << total << "\n";
    cout << "y el gasto mayor por día fue de " << gastoMayor << "\n";
    cout << "y el promedio de gasto por día es " << promedio << "\n";
}