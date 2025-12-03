#include <iostream>

using namespace std;
enum class EstadoEnvio {
    EN_ESPERA = 1,
    ENVIADO,
    ENTREGADO
};
//en enums se agrega un valor numerico y si no tiene obtendrá su valor de la suma del anterior más uno,
//si no tienen valores empezarán en 0 y seguirán continuamente.

enum EstadoAutobus {
    EN_ESPERA = 45,
    ENVIADO = 36,
    ARRIVADO = 78
};

int main(){

    EstadoEnvio mEstadoEnvio = EstadoEnvio::EN_ESPERA;
    EstadoAutobus mEstadoAutobus = EstadoAutobus::EN_ESPERA;

    cout << static_cast<int>(mEstadoEnvio) << endl;
    cout << static_cast<int>(mEstadoAutobus) << endl;

    return 0;
}
