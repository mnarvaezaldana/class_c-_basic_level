#include <iostream>
using namespace std;

/*void actualizarTemp(float* t, float nueva) {
    *t = nueva;
}*/

void actualizarTemp(float* t, float& nueva) {
    *t = nueva;
}

int main() {
    float temperatura = 5.0;
    float nuevaTemperatura;

    /*
    cout << "Temperatura inicial: " << temperatura << "°C\n";
    actualizarTemp(&temperatura, 3.7);
    cout << "Temperatura actualizada: " << temperatura << "°C\n";
    */

    /*
    cout<<"Temperatura inicial: "<<temperatura<<"°C\n";
    cout<<"Ingrese la temperatura nueva\n";
    cin>>nuevaTemperatura;
    actualizarTemp(&temperatura, nuevaTemperatura);
    cout<<"Temperatura actualizada: "<<temperatura<<"°C\n";
    */

    cout<<"Temperartura inicial: "<<temperatura<<"°C\n";
    cout<<"Ingrese la temperatura: \n";
    //actualizarTemp(&temperatura, nuevaTemperatura);
    cin>>nuevaTemperatura;
    actualizarTemp(&temperatura, nuevaTemperatura);
    cout<<"Temperatura actualizada: "<<temperatura<<"°C\n";
    return 0;
}
