#include <iostream>

/**
 * 
 * una estructura o struct en C++ es un tipo de dato compuesto que permite agrupar variables
 * de distintos tipos bajo un mismo nombre.
 * 
 * Se usa para representar entidades simiples (por ejemplo:: alumno, libro, producto, punto en un plano)
 * 
 * 
 * características principales:
 * 
 * Agrupa diferentes tipos de datos.
 * Sus miembros son públicos por defecto.
 * Es ideal para modelar datos sin comportamiento complejo.
 * 
 */

 using namespace std;


 struct Alumno {
    string nombre;
    int edad;
    float promedio;
 };

 /*
 
 Una clase es una plantilla o molde que define propiedades (atributos) y comportamientos (métodos)

 Un objeto es una instancia concreta de una clase:

 características principales:
    Permite programación orientada a objetos (POO)
    Soporta funciones dentro de la clase (métodos)
    Permite aplicar encapsulación, abstracción, herencia y polimorfismo
 */

class Persona {
public:
    string nombre;
    int edad;

    void saludar() {
        cout << "HOla soy " << nombre << " y tengo " << edad << " años " << endl;
    }

};


/*
    La encapsulación consiste en ocultar los datos del objeto y permitir el acceso solo a través de métodos
    llamados getters y setters (Protege los datos internos)

    Abstracción consiste en modelar solo lo esencial y ocultar los detalles internos. Permite trabajar con 
    objetos de manera más intuitiva.
*/

class CuentaBancaria {
private:
    double saldo; // Atributo encapsulado
    
    
public:
    CuentaBancaria(double inicial) {
        saldo = inicial;
    }

    void depositar(double cantidad) {
        saldo += cantidad;
    }

    void retirar(double cantidad) {
        if (cantidad <= saldo) {
            saldo -= cantidad;
        }
    }

    double obtenerSaldo() {
        return saldo;
    }
};

/*

    Difernecia entre struct y class

    

*/

int main() {

    Alumno a1;

    a1.nombre = "Marcos";
    a1.edad = 39;
    a1.promedio = 9.2;

    cout << "Nombre: " << a1.nombre << endl;
    cout << "Edad: " << a1.edad << endl;
    cout << "Promedio: " << a1.promedio << endl;



    Persona p;
    p.nombre = "Marcos";
    p.edad = 21;
    p.saludar();

    return 0;
}