#include <iostream>

using namespace std;

int main() {

    int valorAOperar = 7;

    cout << "El valor a utilizar será: " << valorAOperar << endl;
    
    valorAOperar += 3;
    cout << "El valor después de aplicar += 3 es: " << valorAOperar << endl;

    valorAOperar -= 3;
    cout << "El valor después de aplicar -= 3 es: " << valorAOperar << endl;

    valorAOperar *= 3;
    cout << "El valor después de aplicar *= 3 es: " << valorAOperar << endl;

    valorAOperar /= 3;
    cout << "El valor después de aplicar /= 3 es: " << valorAOperar << endl;

    valorAOperar %= 3;
    cout << "El valor después de aplicar %= 3 es: " << valorAOperar << endl;

    return 0;
}




















/*

Elaborar los siguientes ejercicios: 
Usa operadores de asignación (+=, -=, *=) sobre una variable entera y muestra su valor tras cada operación. 
Solicita un número al usuario y muestra si es positivo o negativo usando if-else.


Pide al usuario que ingrese la temperatura actual en grados Celsius y determina si el clima es frío, templado o caluroso.
Se debe entregar una captura de pantalla del código realizado y de la ejecución obtenida como evidencia de su realización.

*/