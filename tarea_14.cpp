//
// Created by Marcos Armando on 14/12/25.
//
#include <iostream>
#include <string>
#include <vector>
#include <limits>   // <-- FALTABA
#include "tarea_14.h"

using namespace std;

void agregarTareas(vector<string>& tareas);
void mostrarTareas(const vector<string>& tareas);
void eliminarTareas(vector<string>& tareas);

int main() {

    vector<string> tareas;
    int opcionNumeroInt = 0;

    cout << "Bienvenido al programa de gestion de tareas" << endl;

    do {
        cout << "\nIngresa la opcion que desee" << endl;
        cout << "1.- agregar tareas" << endl;
        cout << "2.- mostrar tareas" << endl;
        cout << "3.- eliminar una tarea por su numero" << endl;
        cout << "4.- salir del programa" << endl;

        cin >> opcionNumeroInt;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Entrada invalida. Intente de nuevo." << endl;
            continue;
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        switch (opcionNumeroInt) {
            case 1:
                agregarTareas(tareas);
                break;
            case 2:
                mostrarTareas(tareas);
                break;
            case 3:
                eliminarTareas(tareas);
                break;
            case 4:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opcion no valida" << endl;
        }
    } while (opcionNumeroInt != 4);

    return 0;
}

void agregarTareas(vector<string>& tareas) {
    string tarea;
    cout << "Ingrese la tarea a capturar: ";
    getline(cin, tarea);

    tareas.push_back(tarea);
}

void mostrarTareas(const vector<string>& tareas) {
    if (tareas.empty()) {
        cout << "No hay tareas registradas." << endl;
        return;
    }

    for (size_t i = 0; i < tareas.size(); i++) {
        cout << i + 1 << ". " << tareas[i] << endl;
    }
}

void eliminarTareas(vector<string>& tareas) {
    if (tareas.empty()) {
        cout << "No hay tareas para eliminar." << endl;
        return;
    }

    int numeroDeTarea;
    cout << "Ingrese el numero de la tarea a eliminar: ";
    cin >> numeroDeTarea;

    if (cin.fail() || numeroDeTarea < 1 || numeroDeTarea > tareas.size()) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Numero de tarea invalido." << endl;
        return;
    }

    tareas.erase(tareas.begin() + (numeroDeTarea - 1));
    cout << "Tarea eliminada correctamente." << endl;
}