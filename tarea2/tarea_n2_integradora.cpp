#include <iostream>

using namespace std;

int main() {

    int cantidadProductos, totalEntero;
    float precionUnitario, total;
    string nombreDelProducto;

    cout << "Ingresa la cantidad de productos" << endl;
    cin >> cantidadProductos;

    cout << "Ingresa el precio unitario" << endl;
    cin >> precionUnitario;

    cout << "Ingresa el nombre del producto" << endl;
    cin >> nombreDelProducto;

    total = cantidadProductos * precionUnitario;

    totalEntero = static_cast<int>(total);

    cout << "Para el producto " << nombreDelProducto << endl;
    cout << "El precio unitario es " << precionUnitario << endl;
    cout << "y la cantdad de productos es " << cantidadProductos << endl;
    cout << "por lo que el total es: " << total << endl;
    cout << "y el total entero es: " << totalEntero << endl;

    return 0;
}