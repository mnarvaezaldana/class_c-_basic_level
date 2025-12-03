#include <iostream>
#include <wchar.h>
#include <locale>
#include <stdlib.h>
// No hubo clase 17 ni 18, solo fue introducción del nuevo maestro

using namespace std;

int main(void) {

    setlocale(LC_ALL, "");
    int suma = 0, numeroIngresado;

    cout << "Introduzca un número";
    cin >> numeroIngresado;

    while(numeroIngresado >= 0 && numeroIngresado <= 50) {

        suma += numeroIngresado;

        cout << "Introduzca un número";
        cin >> numeroIngresado;
    }

    cout << endl;
    cout << "La suma es " << suma << endl;
    cout << "El programa finalizó por el número " << numeroIngresado;
 
    system("puase");
    return 0;
}

string getMonthName(int month) {
    switch (month)
    {
    case 1: return "Enero";
    case 2: return "Febrero";
    case 3: return "Marzo";
    case 4: return "Abril";
    case 5: return "Mayo";
    case 6: return "Junio";
    case 7: return "Julio";
    case 8: return "Agosto";
    case 9: return "Septiembre";
    case 10: return "Octubre";
    case 11: return "Noviembre";
    case 12: return "Diciembre";
    default: return "Mes no valido";
    }
    
}