//#pragma once // solo se incluya una vez, que no se duplique

//MANERA ANTIGUA pero no obsoleto
/*

#ifndef OPERACIONESMAT_H
#define OPERACIONTSMAT_H

#endif

*/

#ifndef OPERACIONESMAT_H
#define OPERACIONTSMAT_H

#include <string>

using namespace std;


namespace OperacionesMatematicas {

    double PI = 3.1416; // si va aquí es porque se va a utilizar en el main
    int sumar(int numero1, int numero2);
    void saludar(string nombre);

}

namespace OM = OperacionesMatematicas; // esto igual puede ir en el uso de la librería

#endif

/*
#pragma once
namespace OperacionesMatematicas {

    double PI;
    int sumar(int numero1, int numero2);
    void saludar(string nombre);
}

*/