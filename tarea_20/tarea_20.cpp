#include <iostream>

int volumen = 50; // variable global

void subirVolumen(int* punteroVolumen) {
    if (punteroVolumen != nullptr) {
        *punteroVolumen += 10;
    }
}

void bajarVolumen(int& volumen) {
    volumen -= 10;
}

int main() {

    int* punteroVolumen = &volumen;

    std::cout<<"Volumen inicial: " <<volumen<<"\n";

    subirVolumen(punteroVolumen);
    std::cout<<"Despues de subir volumen: "<<volumen<<"\n";

    bajarVolumen(volumen);
    std::cout<<"Despues de bajar volumen: "<<volumen <<"\n";

    return 0;
}