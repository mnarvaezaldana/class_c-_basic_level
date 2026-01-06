#include <iostream>

int volumen = 50;

void subirVolumen(int* punteroVolumen)
void bajarVolumen(int& volumen)

int main() {

    int* punteroVolumen = &volumen;

    std::cout<<"Volumen inicial: " <<volumen<<;

    subirVolumen(punteroVolumen);
    std::cout<<"Despues de subir volumen: "<<volumen<<"\n";

    bajarVolumen(volumen);
    std::cout<<"Despues de bajar volumen: "<<volumen <<"\n";

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