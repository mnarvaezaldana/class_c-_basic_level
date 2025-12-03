#include <iostream>
using namespace std;

//prototipo de función



//inicializción directa

/*
    [tipo_retorno] [nombre_función] ([parametros]) {
        [bloque_codigo]
        return [valor_retornado];
    }
*/

/*
    Plantilla de funciòn

    "va a haber una funcìon, sè que existe, no hagas problema, creemos una plantilla"

    float multiplicarDonsNumeros(float numero1, float numero2);
    void Saludar(string nombre);

*/

float multiplicarDosNumeros(float numero1, float numero2) {
    float resultado = numero1 * numero2;
    return resultado;
}

void Saludar(string nombre) {
    cout << "Hello " << nombre << endl;
}

int main() {

    Saludar("Marcos");

    float numeroUno = 0.1f;
    float numeroDos = 1.5f;
    float resultado = multiplicarDosNumeros(numeroUno, numeroDos);
    std::cout << "Hello World " << resultado;

    return 0;
}

// orden de compilaciòn
// incluye las librerias
// linea por linea de arriba hacia abajo