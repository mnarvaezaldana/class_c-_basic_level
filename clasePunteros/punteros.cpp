#include <iostream>
#include <string>

/**
 * La memoria de la computadora es un dispositivo electrónico que permite almacenar y examinar la información guardada en esta.
 * La unidad básica para representar información en la memoría se llama bit (1 o 0). El byt es la unidad de medición y está conformado
 * por 8 bits,
 * 
 * En C++ la declaración de una variable indica el nombre de la variable y la cantidad de bytes que la variable necesita para almacenar
 * su información en la memoría de la computadora, Cuántos bytes son reservados para una variable, depende del tipo indicado en la declaración
 * de la variable.
 * 
 * Se crea un vínculo entre el número de la variable y el grupo de bytes asignados a la misma. El nombre de la variable sabe cuál es el grupo de bytes
 * donde estará la informacíon que le pertenece.
 * 
 * 
 * En C++ existen unas variables especiales que pueden almacenar la dirección (localización) donde se encuentra un grupo de bytes en la memoria de
 * la computadora. Esas variables se conocen como variables puntero o simplemente punteros.
 * 
 * Tipo de dato + Asterisco ========> int*
 * 
 * ¿Cómo se obtiene la dirección? ==========> & + nombre de la variables >>>>>>>< Devuelve la dirección
 * La dirección devuelta porla expresión anterior solo puede ser guardada en un puntero cuya declaración corresponde al tipo de dato.
 * 
 * Un puntero en C++ es una variable que almacena la dirección de memoria de otro objeto, permitiendo su manipulación directa.
 * 
 * 
 * Conceptos clave:
 * 
 * - Almacenar direcciones 
 * - Opearador de dirección &
 * - Operador de desreferencia *
 * - Declaración
 * - Aritmética de punteros
 * 
 * Usos principales
 * 
 * - Asignación dinámica de memoria
 * - Paso por referencia
 * - Estructuras de datos dinámicas
 * - Arreglos
 * 
 * Consideraciones de seguridad
 * 
 * - punteros básicos (raw pointers)
 * - punteros inteligentes (smart pointers)
 * 
 */

int main() {

    // ejercicio 1
    
    int variable;
    int* apuntador = &variable;
    *apuntador = 20;
    delete [] apuntador;

    apuntador = NULL;


    // ejercicio 2

    std::string food = "Pizza";
    std::string* xptr = &food;

    std::cout << "Valor de food: " << food << std::endl;
    std::cout << "Dirección de food " << &food << std::endl;
    std::cout << "Valor almacenado en xptr" << *xptr << std::endl;

    //ejercicio 3

    std::string nombre = "Marcos";
    std::string *pNombre = &nombre;

    std::cout << *pNombre << std::endl;  // muestra el valor que tiene, hace referecina a la variable
    std::cout << &pNombre << std::endl;  // muestra la dirección, la posición de la variable

    return 0;
}