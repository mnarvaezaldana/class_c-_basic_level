#include <string>
#include <iostream>

using namespace std;


//String es un conjunto de caractéres, 
/**
 * En C++ se puede manejar de dos maneras Arreglos de caractes char[] y/o string
 * 
 * permite trabajar con cadenas de texto como objectos
 * 
 * - Gestión automática de memoria
 * - Tamaño dinámico
 * - Funciones integradas para buscar, modificar, y comparar texto
 * - Operativos intuitivos(+, =, ==, etc.)
 * 
 * #include <string>
 * #include <iostream>
 * 
 * se maneja la variable entre comillas
 * 
 */

int main() {

    string nombre = "Nombre usuario";
    cout << nombre;

    string s1;                      // cadena vacía
    string s2 = "Hola";             // inicialización directa
    string s3("Mundo");             // incialización mediante constructor
    string s4 = s2 + " " + s3;      // concatenación

    string texto = "Hola mundo";    
    cout << texto.size();            // sacar la cantidad de caractéres

    cout << texto[0];                // H
    cout << texto.at(1);             // o (con verificación de rango);

    string saludo = nombre + "Bienvenido"; // concatenación

    string s = "Hola";
    s += " mundo";                   // uso de operador +=
    s.append("!!!");                 // uso de función append

    string textoNuevo = "Programación en C++";
    size_t pos = texto.find("C++");

    if (pos != string::npos) {
        cout << "Encontrado en la posición " << pos;
    }

    // subcadenas

    string palabra = "compuradora";
    string sub = palabra.substr(0, 5);  // "compu"

    string frase = "Me gusta C";
    frase.replace(9, 1, "C++");         // remplazamiento de caracter

    string fraseDos = "Hola mundo";
    fraseDos.erase(4, 6);               // borra desde el inicio de los caracteres 4, 6

    string a = "Hola";
    string b = "Hola";

    if (a == b) {
        "Son iguales";
    } else {
        "no son iguales";
    }

    string numero = "123";
    int n = stoi(numero);                // Se está convirtiendo de texto a números enteros con stoi

    double d = stod("45.67");             // se está convirtiendo en double son stod

    int x = 10;
    string textS = to_string(x);          // convertir el número a cadena de texto

    string palabraAIterar = "Cadenas de texto";

    for (char c : palabraAIterar)
        cout << c << "-";

    return 0;
}