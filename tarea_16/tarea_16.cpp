#include <iostream>
#include <vector>
#include <string>
#include <limits>

struct Producto {
    std::string nombre;
    int cantidad;
    float precio;
};

int desplegarMenu();
void agregarProducto(std::vector<Producto>& carrito);
void calcularTotal(const std::vector<Producto>& carrito);
bool eliminarProducto(std::vector<Producto>& carrito);

int main() {

    std::vector<Producto> carrito;
    int opcionSeleccionada;

    std::cout<<"Bienvenido al programa de carrito de compras\n";

    do {
        opcionSeleccionada = desplegarMenu();
        switch (opcionSeleccionada) {
            case 1:
                agregarProducto(carrito);
                break;
            case 2:
                eliminarProducto(carrito);
                break;
            case 3:
                calcularTotal(carrito);
                break;
            case 4:
                std::cout<<"Gracias por usar el programa\n";
                opcionSeleccionada = 0;
                break;
            default:
                std::cout<<"Ingrese una opcion valida\n";
        }
    } while (opcionSeleccionada != 0);

    return 0;
}

int desplegarMenu() {
    std::cout<<"Elgina una de las siguientes opciones\n";
    std::cout<<"1 para agregar produto\n";
    std::cout<<"2 para eliminar produto\n";
    std::cout<<"3 para calcular el total\n";
    std::cout<<"4 para salir\n";

    int opcion;
    std::cin>>opcion;
    return opcion;
}

void agregarProducto(std::vector<Producto>& carrito) {
    std::string nombre;
    int cantidad;
    float precio;

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::cout<<"Ingrese nombre del producto: ";
    std::getline(std::cin, nombre);

    std::cout<<"Ingrese cantidad del producto: ";
    std::cin>>cantidad;

    std::cout<<"Ingrese el precio del producto: ";
    std::cin>>precio;

    Producto p;
    p.nombre = nombre;
    p.cantidad = cantidad;
    p.precio = precio;

    carrito.push_back(p);
}

void calcularTotal(const std::vector<Producto>& carrito) {
    float total = 0.0f;

    for(const Producto& p : carrito) {
        total += p.cantidad * p.precio;
    }

    std::cout<<"El valor total del carrito es "<<total<<" \n";
}

bool eliminarProducto(std::vector<Producto>& carrito) {
    std::string nombre;

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::cout<<"Ingrese nombre del producto a eliminar: ";
    std::getline(std::cin, nombre);

    for (auto it = carrito.begin(); it != carrito.end(); it++) {
        if (it->nombre == nombre) {
            carrito.erase(it);
            return true;
        }
    }
    return false;
}