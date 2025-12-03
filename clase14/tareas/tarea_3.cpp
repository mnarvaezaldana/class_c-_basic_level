#include <iostream>

using namespace std;

int area(int lado);
int area(int base, int altura);

int main() {

    int areaLado = area(3);
    int areaBasePorAltura = area(5, 3);

    cout << "El área obtenido por cada lado es " << areaLado << endl;
    cout << "El área obtenido por base por altura es " << areaBasePorAltura << endl;

    return 0;
}

int area(int lado) {
    return lado * lado;
}

int area(int base, int altura) {
    return base * altura;
}