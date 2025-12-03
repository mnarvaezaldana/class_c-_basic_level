#include <iostream>
using namespace std;

int main() {

    int valorParaRevisar = 1;
    do {
        int estudiantes;
        string resumen;
        cout << "Bienvenido al programa de promedios" << endl;
        cout << "Ingresa el numero de estudiantes a capturar" << endl;
        cin >> estudiantes;

        for (int i = 0; i < estudiantes; i++) {
            string nombre;
            cout << "Por favor ingrese el nombre del alumno" << endl;
            cin >> nombre;

            int numeroCalificaciones = 1;
            int totalCalificaciones = 0;
            int promedio;
            char calificacionLetra;

            while (numeroCalificaciones <= 3) {
                int calificacion;
                cout << "Por favor ingrese la calificacion " << numeroCalificaciones << " de " << nombre << endl;
                cin >> calificacion;

                if (calificacion > 10 || calificacion < 0) {
                    cout << "Ingrese un valor válido para la calificacion " << numeroCalificaciones << endl;
                } else {
                    totalCalificaciones += calificacion;
                    numeroCalificaciones++;
                }
            }
            promedio = totalCalificaciones / 3;

            switch (promedio) {
                case 10: {
                    calificacionLetra = 'A';
                    break;
                }
                case 9: {
                    calificacionLetra = 'A';
                    break;
                }
                case 8: {
                    calificacionLetra = 'B';
                    break;
                }
                case 7: {
                    calificacionLetra = 'C';
                    break;
                }
                case 6: {
                    calificacionLetra = 'D';
                    break;
                }
                default: {
                    calificacionLetra = 'F';
                    break;
                }
            }

            resumen += nombre + " obtuvo " + calificacionLetra + "\n";
        }
        cout << "El resumen es:" << endl;
        cout << resumen;
        cout << "Deseas continuar con otro grupo de estudiantes" << endl;
        cin >> valorParaRevisar;
    } while (valorParaRevisar == 1);

    return 0;
}