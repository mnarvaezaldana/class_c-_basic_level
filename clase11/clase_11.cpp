#include <iostream>
#include <string>

using namespace std;

namespace GameSystem {
    enum class Nivel { NOVATO, INTERMEDIO, EXPERTO };
    enum class Dificultad { FACIL = 1, INTERMEDIO, DIFICIL };
}
namespace GS = GameSystem;
int main() {

    bool control = true, controlWhile = true;
    int opcion;

    int puntos;
    string usuario, dificultadTextual;
    GS::Dificultad dificultad;
    GS::Nivel nivel;

    do {

        cout << "Ingrese su usuario: " << endl;
        getline(cin, usuario);
        cout << "Ingrese la cantidad de puntos obtenida: " << endl;
        cin >> puntos;
        cout << "Ingrese la dificultad jugada: " << endl;
        cout << "1 - FACIL" << endl;
        cout << "2 - INTERMEDIO" << endl;
        cout << "3 - DIFICIL" << endl;
        controlWhile = true;

        while (controlWhile) {

            cin >> opcion;

            switch (opcion) {
                case 1:
                    dificultad = GS::Dificultad::FACIL;
                    break;
                case 2:
                    dificultad = GS::Dificultad::INTERMEDIO;
                    break;
                case 3:
                    dificultad = GS::Dificultad::DIFICIL;
                    cout << "Ingrese una opcion valida." << endl;
                    break;
                default:
                    break;
            }
            
        }

        puntos *= static_cast<int>(dificultad);

        if (puntos < 1000) {
            nivel = GS::Nivel::NOVATO;
            dificultadTextual = "NOVATO";
        } else if (puntos >= 1000 && puntos < 5000) {
            nivel = GS::Nivel::INTERMEDIO;
            dificultadTextual = "INTERMEDIO";
        } else {
            nivel = GS::Nivel::EXPERTO;
            dificultadTextual = "EXPERTO";
        }

        cout << "El usuario: " << usuario << ", obtuvo un total de: " << puntos << " puntos, su nivel es de: " << dificultadTextual << endl;

        cout << "Desea agregar otro jugador (1 - S, 2 - N): ";
        cin >> opcion;
        cin.ignore();

        if (opcion == 2) {
            control; 
        }

    } while(control);

    return 0;
}