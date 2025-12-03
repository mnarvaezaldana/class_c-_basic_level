#include <iostream>
#include <string>
#include <map>

using namespace std;

bool esValido(int anio) {
    return ((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0));
}

bool esValido(short mes) {
    return (mes >= 1 && mes <= 12);
}

// Arreglos
void arreglo() {

    int mArreglo[4];
    int mArregloDoble[5][5];


}


int main() {

    map<int, string> meses = {
        {1, "enero"}, {2, "febrero"}, {3, "marzo"}, {4, "abril"}, {5, "mayo"}, {6, "junio"}, {7, "julio"}, {8, "agosto"}, {9, "septiembre"}, {10, "octubre"}, {11, "noviembre"}, {12, "diciembre"}
    };




    return 0;
}