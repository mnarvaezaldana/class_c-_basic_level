#include <iostream>

using namespace std;

int main() {

    float variableFlotante = 4.654321;
    double variableDouble = 6.987654321;

    double resultadoSuma = variableFlotante + variableDouble;
    double resultadoResta = variableFlotante - variableDouble;
    
    cout << "El resultado de la suma es: " << resultadoSuma << endl;
    cout << "El resultado de la resta es " << resultadoResta << endl;

    return 0;
}