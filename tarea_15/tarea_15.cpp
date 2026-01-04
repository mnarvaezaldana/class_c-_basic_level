//
// Created by Marcos Armando on 04/01/26.
//

#include <iostream>
#include <vector>

void procesarCalificaciones(std::vector <float> calificaciones);

int main() {

    std::vector<float> calificaciones;
    int capturar = 0;

    std::cout<<"Bienvenido al programa para administrar calificaciones\n";
    std::cout<<"Si desea terminar con la captura digite -1 como calificación\n";

    while (capturar != -1) {
        std::cout<<"Ingrese la siguiente calificacion\n";
        std::cin>>capturar;

        if (capturar >= 0) {
            calificaciones.push_back(capturar);
        }
    }

    procesarCalificaciones(calificaciones);

    return 0;
}

void procesarCalificaciones(std::vector <float> calificaciones) {
    int cantidad = calificaciones.size();
    int total = 0, numeroReprobados = 0, calificacionMayor = calificaciones[0];
    double promedio = 0;

    for (int i = 0; i < cantidad; i++) {
        if (calificaciones[i] > calificacionMayor) {
            calificacionMayor = calificaciones[i];
        }
        if (calificaciones[i] < 70.0f) {
            ++numeroReprobados;
        }
        total += calificaciones[i];
    }

    promedio = total / cantidad;


    std::cout<<"Total promedio = "<<promedio<<"\n";
    std::cout<<"Calificion mayor = "<<calificacionMayor<<"\n";
    std::cout<<"Numero de reprobados = "<<numeroReprobados<<"\n";
}