#include <iostream>
using namespace std;

enum class Nivel {
    FACIL = 0,
    MEDIO = 1,
    DIFICIL = 2
};


int main() {

    int valorFacil = static_cast<int>(Nivel::FACIL);
    cout << "El valor encontrado en facil es: " << valorFacil << endl; 

    int valorMedio = static_cast<int>(Nivel::MEDIO);
    cout << "El valor encontrado en medio es: " << valorMedio << endl; 

    int valorDificil = static_cast<int>(Nivel::DIFICIL);
    cout << "El valor encontrado en dificil es: " << valorDificil << endl; 


    return 0;
}