#include <iostream>

using namespace std;

int main() {

    int edad;

    cout << "digite su edad" << endl;
    cin >> edad;

    if (edad >= 18) {
        cout << "Puede entrar" << endl;
    } else {
        cout << "No pueden ingresar menores de edad" << endl;
    }


    int edad2;

    cout << "digite su nueva edad" << endl;
    cin >> edad2;

    if (edad2 < 13) {
        cout << "Eres un adulto infante" << endl;
    } else if (edad2 >= 13 && edad2 <= 17) {
        cout << "Eres un adolescente" << endl;
    } else if (edad2 > 17 && edad2 <= 60) {
        cout << "Eres un adulto" << endl;
    } else {
        cout << "Eres un adulto mayor" << endl;
    }

    return 0;
}