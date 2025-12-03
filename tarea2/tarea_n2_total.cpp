#include <iostream>

using namespace std;

int main() {

    // parte 1
    int primeraVariable = 5, segundaVariable = 7, resultado;
    resultado = primeraVariable + segundaVariable;
    cout << "El resultado es: " << resultado << endl;

    // parte 2
    float variableFlotante = 4.654321;
    double variableDouble = 6.987654321;
    double resultadoSuma = variableFlotante + variableDouble;
    double resultadoResta = variableFlotante - variableDouble;
    cout << "El resultado de la suma es: " << resultadoSuma << endl;
    cout << "El resultado de la resta es " << resultadoResta << endl;

    // parte 3
    char variableChar = 'T';
    bool variableBool = true;
    cout << "Variable tipo char: " << variableChar << endl;
    cout << "Variable tipo char: " << variableBool << endl;

    // parte 4
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