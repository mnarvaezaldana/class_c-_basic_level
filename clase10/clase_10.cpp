#include <iostream>
#include <string>

namespace Automotriz {
    enum TipoMantenimiento { NINGUNO, BASICO, COMPLETO };
}

namespace Auto = Automotriz;

int main() {

    bool control = true;
    std::string nombreVehiculo;
    int kilometraje, aniosUso, opcion;

    Auto::TipoMantenimiento mantenimiento;

    do {

        std::cout << "Ingrese el modelo de su vehiculo: ";
        std::cin.ignore();
        std::getline(std::cin, nombreVehiculo);
        std::cout << std::endl;
        std::cout << nombreVehiculo;

        std::cout << "Ingrese el kilometraje de su vehiculo: ";
        std::cin >> kilometraje;

        std::cout << "Ingrese la cantidad de anios de su vehiculo" << std::endl;
        std::cin >> aniosUso;

        if ((kilometraje >= 10000 && kilometraje < 20000) || (aniosUso > 2 && aniosUso < 4)) {
            mantenimiento = Auto::BASICO;
            std::cout << "Necesita su carro un mantenimiento Basico." << std::endl;
        } else if ((kilometraje >= 20000) || (aniosUso > 4)) {
            mantenimiento = Auto::COMPLETO;
            std::cout << "Necesita su carro un mantenimiento Completo." << std::endl;            
        } else {
            mantenimiento = Auto::NINGUNO;
            std::cout << "No necesita su carro mantenimiento." << std::endl;            
        }

        std::cout << "Desea agregar otro carro (2 - S, 2 - N)" << std::endl;
        std::cin >> opcion;

        if (opcion == 1) {
            control = true;
        } else {
            control = false;
        }


    } while (control);

    return 0;
}