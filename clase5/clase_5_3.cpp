#include <iostream>

using namespace std;

int main() {

    int n = 6;

    for (int i = 1; i <= 100000; i++) {
        cout << "La variable es: " << i * n << endl;
    }

    return 0;
}