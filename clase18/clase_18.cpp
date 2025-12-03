#include <iostream>
#include <wchar.h>
#include <locale>
#include <stdlib.h>
// No hubo clase 17 ni 18, solo fue introducción del nuevo maestro

using namespace std;

int main(void) {

    setlocale(LC_ALL, "");
    int suma = 0, numeroIngresado;
    do {

        cout << "Introduzca un número";
        cin >> numeroIngresado;

        suma += numeroIngresado;

    } while(numeroIngresado >= 0 && numeroIngresado <= 50);

    cout << "La suma es " << suma << endl;
    cout << "El programa finalizó por el número " << numeroIngresado;
 
    system("puase");
    return 0;
}