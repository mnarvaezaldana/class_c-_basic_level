//
// Created by Marcos Armando on 04/01/26.
//
#include <iostream>
#include <string>

void bienvenida();
void ingresarGastos(int gastos[], int& total, int& gastoMayor);
std::string obtenerDia(int numeroDia);
void mensajeFinal(int total, int gastoMayor);

int main() {
    const int DIAS_SEMANA = 7;

    int total = 0, gastoMayor = 0;
    double promedio = 0.0;
    int gastos[DIAS_SEMANA];

    bienvenida();
    ingresarGastos(gastos, total, gastoMayor);
    mensajeFinal(total, gastoMayor);

    return 0;
}

void bienvenida() {
    std::cout<<"Bienvenidos al programa de administración de gastos\n";
}

void ingresarGastos(int gastos[], int& total, int& gastoMayor) {
    for (int i=0; i<7; i++) {
        std::cout << "Ingrese los gastos para el dia " << obtenerDia(i) << " por favor: ";
        std::cin >> gastos[i];
        total += gastos[i];
        if (gastos[i] > gastoMayor) {
            gastoMayor = gastos[i];
        }
    }
}

std::string obtenerDia(int numeroDia) {
    static const std::string dias[] = {
        "Lunes", "Martes", "Miercoles",
        "Jueves", "Viernes", "Sabado", "Domingo"
    };

    if (numeroDia >= 0 && numeroDia < 7)
        return dias[numeroDia];

    return "Dia invalido";
}

void mensajeFinal(int total, int gastoMayor) {
    std::cout << "El gasto total administrado en la semana es " << total << "\n";
    std::cout << "y el gasto mayor por día fue de " << gastoMayor << "\n";
}