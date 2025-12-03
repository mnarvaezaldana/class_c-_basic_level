#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>

using namespace std;

int main() {

    string text = "Texto vacío";

    if (text.empty()) {
        cout << "toUpper: " << to_string(toupper(text[0])) <<  endl;
        cout << "toLowe: " << to_string(tolower(text[0])) << endl;
    }

    if (text.size() >= 5) {
        string sub = text.substr(0, 5);
        cout << "Este es el sub: " << sub << endl;
    }

    string reemplazo = "Hola";
    text.replace(0, 6, reemplazo);

    cout << reemplazo;

    size_t pos = text.find("C++");

    cout << "find: " << pos << endl;
    pos = text.find("C++");

    if (text == reemplazo) {
        cout << "Son iguales" << endl;
    } else {
        cout << "No son iguales" << endl;
    }

    string mayus = text;
    transform(mayus.begin(), mayus.end(), mayus.begin(), ::toupper);

    string minus = text;
    transform(minus.begin(), minus.end(), minus.begin(), ::toupper);

    string insertar = text;
    insertar.insert(0, "Inicio - ");

    string eliminar = text;
    eliminar.erase(); // borra todo
    eliminar.erase(0, 3); // un rango del 0 al 3

    text.clear();

    return 0;
}