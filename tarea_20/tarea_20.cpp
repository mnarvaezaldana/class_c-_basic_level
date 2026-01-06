#include <iostream>

int volumen = 50;

void subirVolumen(int* punteroVolumen)
void bajarVolumen(int& volumen)

int main() {

    int* punteroVolumen = &volumen;

    std::cout << "Volumen inicial: " << volumen << std::endl;

    subirVolumen(punteroVolumen);
    std::cout << "Despues de subir volumen: " << volumen << std::endl;

    bajarVolumen(volumen);
    std::cout << "Despues de bajar volumen: " << volumen << std::endl;

    return 0;
}

void subirVolumen(int* punteroVolumen) {
    if (punteroVolumen != nullptr) {
        *punteroVolumen += 10;
    }
}

void bajarVolumen(int& volumen) {
    volumen -= 10;
}