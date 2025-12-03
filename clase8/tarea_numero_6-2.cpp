#include <iostream> 
    
using namespace std;

enum class Niveles {
    FACIL = 2,
    MEDIO = 4,
    DIFICIL = 6
};

int main() {

    int valorFacil = static_cast<int>(Niveles::FACIL);
    int valorMedio = static_cast<int>(Niveles::MEDIO);
    int valorDificil = static_cast<int>(Niveles::DIFICIL);

    cout << "El valor entero de facil es "<< valorFacil << endl;
    cout << "El valor entero de medio es "<< valorMedio << endl;
    cout << "El valor entero de dificil es "<< valorDificil << endl;

    return 0;
}