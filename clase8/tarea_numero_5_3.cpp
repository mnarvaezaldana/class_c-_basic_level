#include <iostream>

using namespace std;

int main() {

    int valorTotal = 0;

    for (int i = 1; i <= 50; i++) {
        valorTotal += i;
    }

    cout << "El resultado es " << valorTotal << endl;

    return 0;
}