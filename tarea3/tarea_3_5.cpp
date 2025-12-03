#include <iostream>

using namespace std;

int main() {

    int temperatura;

    cout << "Ingresa la temperatura: ";
    cin >> temperatura;

    if (temperatura < 16) {
        cout << "La temperatura es propia de un clima frío" << endl;
    } else if (temperatura >= 16 && temperatura <= 25) {
        cout << "La temperatura es propia de un clima templado" << endl;
    } else {
        cout << "La temperatura es propia de un clima caluroso" << endl;
    }

    return 0;
}