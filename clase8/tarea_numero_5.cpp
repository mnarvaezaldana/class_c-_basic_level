#include <iostream>

using namespace std;

int main() {

    int valor = 0;

    valor++;
    valor++;

    while (valor <= 20) {
        cout << "El valor es " << valor << endl;
        valor++;
        valor++;
    }

    return 0;
}