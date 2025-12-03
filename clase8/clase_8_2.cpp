#include <iostream>
using namespace std;

int main() {

    string texto;

    cout << "Ingrese un texto para el ejemplo: " << endl;
    getline(cin, texto);

    cout << "Texto: " << texto << endl;

    cout << "Longitud Size(): " << texto.size() << endl;
    cout << "Longitud Length(): " << texto.length() << endl;

    string saludo = "Hola Mundo";
    string concatenado = texto + saludo;

    cout << "Texto concatenado: " << concatenado << endl;

    if (!texto.empty()) {
        cout << "Primer carecter: " << texto[0] << endl; // Error fatal
        cout << "Primer carecter: " << texto.at(0) << endl; //Excepción más manegable
    }

    return 0;
}