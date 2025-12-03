#include <iostream>

using namespace std;

int main() {

    int calificacion;

    cout << "Ingrese la calificacion a evaluar" << endl;
    cin >> calificacion;

    if (calificacion > 85) {
        cout << "La calificacion es buena" << endl;
    } else if (calificacion > 69) {
        cout << "La calificacion es regular" << endl;
    } else {
        cout << "La calificacion es insuficiente" << endl;
    }

    return 0;
}