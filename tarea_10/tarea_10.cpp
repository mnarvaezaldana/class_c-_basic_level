#include <iostream>
#include "tarea_10.h"

using namespace std;


int bienvenidaYCapturaNumeroRegistros()
{
    int numeroDeCalificaciones;
    cout << "Ingrese el número de calificaciones que desea ingresar" << endl;
    cin >> numeroDeCalificaciones;
    cout << "Usted podrá ingreserar " << numeroDeCalificaciones << " calificaciones" << endl;

    return numeroDeCalificaciones;
};

double obtenerTotal(int numeroDeCalificaciones)
{
    double total = 0.0;

    for (int i = 0; i < numeroDeCalificaciones; i++) {
        int calificacionActual;
        cout << "Ingrese la calificación " << i << endl;
        cin >> calificacionActual;
        total += calificacionActual;
    }

    return total;
};

double obtenerPromedio(double total, int numeroDeCalificaciones)
{
    return total / numeroDeCalificaciones;
};

void informefinal(double total, double resultado)
{
    cout << "La suma total de las calificaciones es " << total << endl;
    cout << "El promedio es " << resultado << endl;
};

int main() {

    int numeroDeCalificaciones = bienvenidaYCapturaNumeroRegistros();
    double total = obtenerTotal(numeroDeCalificaciones);
    double resultado = obtenerPromedio(total, numeroDeCalificaciones);

    informefinal(total, resultado);
    return 0;
}