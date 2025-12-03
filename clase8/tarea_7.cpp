#include <iostream>

namespace Calculadora {
    int resultado = 9;
}

namespace PruebaUno {
    int valor = 8;
}

namespace PruebaDos {
    int valor = 7;
}

using namespace std;
using namespace Calculadora;
using namespace PruebaUno;
using namespace PruebaDos;

int main () {

    cout << "El resultado en calculadora es " << resultado << endl;
    cout << "El valor en prueba uno es " << PruebaUno::valor << endl;
    cout << "El valor en prueba dos es " << PruebaDos::valor << endl;

    return 0;
}
