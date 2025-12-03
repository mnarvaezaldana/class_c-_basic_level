#include <iostream>

using namespace std;

int main() {

    int variableUno = 9, variableDos = 7, suma, resta, multiplicacion, division, modulo;

    suma = variableUno + variableDos;
    resta = variableUno - variableDos;
    multiplicacion = variableUno * variableDos;
    division = variableUno / variableDos;
    modulo = variableUno % variableDos;

    cout << "El resultado de la suma es: " << suma << endl;
    cout << "El resultado de la resta es: " << resta << endl;
    cout << "El resultado de la multiplicacion es: " << multiplicacion << endl;
    cout << "El resultado de la division es: " << division << endl;
    cout << "El resultado del modulo es: " << modulo << endl;

    return 0;
}