#include <iostream>
#include <string>

using namespace std;

int main() {

    string nombreCompleto;

    cout << "Ingrese su nombre completo" << endl;
    getline(cin, nombreCompleto);


    string nombre, apellido, nombreCompleto2;

    cout << "Por favor, ingrese el nombre" << endl;
    getline(cin, nombre);

    cout << "Por favor, ahora ingrese el apellido" << endl;
    getline(cin, apellido);

    nombreCompleto2 = nombre + " " + apellido;

    cout << "El valor concatenado es " << nombreCompleto2 << endl;


    string cadenaAMedir;
    cout << "Ingrese la cadena que desea saber su longitud" << endl;
    getline(cin, cadenaAMedir);
    cout << "su input " << cadenaAMedir << " tiene " << cadenaAMedir.size() << " caracteres" << endl; 

    cout << "El primer caracter de la cadena es " << cadenaAMedir[0] << endl;

    string cadena5Caracteres;

    cout << "Ingrese la cadena de donde solo quiere mostrar 5 caracteres" << endl;
    getline(cin, cadena5Caracteres);

    if (cadena5Caracteres.size() >= 5) {
        for(int i = 0; i < 5; i++) {
            cout << "Caracter con indice " << i << " es " << cadena5Caracteres[i] << endl;
        }

    } else {
        cout << "La cadena tiene menos de cinco caracteres" << endl;
    }


    return 0;
}