#include <iostream>
#include <vector>
#include <string>
#include <limits>

void displayMenu();
void registrarPago(std::vector<float>& pagos);
void mostrarPago(const std::vector<float>& pagos);
void sumarTotalDePagos(std::vector<float> pagos);
void filtrarPagos(std::vector<float> pagos);

int main() {

    std::vector<float> pagos;
    int opcion;
    std::cout<<"Bienvenidos al programa de administración de gastos\n";

    do {
        displayMenu();
        std::cin>>opcion;
        switch (opcion) {
            case 1:
                registrarPago(pagos);
                break;
            case 2:
                mostrarPago(pagos);
                break;
            case 3:
                sumarTotalDePagos(pagos);
                break;
            case 4:
                filtrarPagos(pagos);
                break;
            case 5:
                std::cout<<"Gracias por haber usado el programa de administracion de gastos\n";
                opcion = -1;
        }
    } while(opcion != -1);

    return 0;
}

void displayMenu() {
    std::cout<<"Elija una opción del menú\n";
    std::cout<<"1 registrar pago\n";
    std::cout<<"2 mostrar pagos\n";
    std::cout<<"3 sumar total pagado\n";
    std::cout<<"4 filtrar pagos\n";
    std::cout<<"5 salida\n";
}

void registrarPago(std::vector<float>& pagos) {
    float pago;
    std::cout<<"Ingrese el monto del pago a registrar: ";
    std::cin>>pago;
    pagos.push_back(pago);
}

void mostrarPago(const std::vector<float>& pagos) {
    for (float pago : pagos) {
        std::cout<<" "<<pago<<"\n";
    }
}

void sumarTotalDePagos(std::vector<float> pagos) {
    float total = 0.0f;
    for (float pago : pagos) {
        total += pago;
    }
    std::cout<<"Total de pagos: "<<total<<"\n";
}

void filtrarPagos(std::vector<float> pagos) {
    float filtro = 0.0f;
    std::cout<<"Ingrese el monto del que desea filtrar: \n";
    std::cin>>filtro;

    for (float pago : pagos) {
        if (pago >= filtro) {
            std::cout<<" "<<pago<<"\n";
        }
    }
}