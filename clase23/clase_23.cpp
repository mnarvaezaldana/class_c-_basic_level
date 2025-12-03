#include <iostream>

/**
 * En C++, std::vector es una de las estructuras de datos más utilizadas dentro de la biblioteca
 * estándar (STL - Standard Template Library). Un vector es un arreglo dinámico que puede cambiar
 * de tamaño automáticamente cuando se agregan o eliminan elementos. A diferencia de los arreglos
 * tradicionales, cuyo tamaño debe conocerse en tiempo de compilación, un vector permite gestionar
 * colecciones de datos de manera flexible, segura y eficiente.
 * 
 * El trabajo con std::vector resulta especialmente útil cuando no se conoce con anticipación
 * la cantidad exacta de elementos que se van a almacenar o cuando la colección debe crecer o reducirse
 * durante la ejecución del programa.
 * 
 * std::vector es una plantilla (template class) que implementa
 * un contenedor secuencial. Internamente gestiona memoria dinámica
 * y almacena sus elementos de manera contigua, similar a un arreglo
 * 
 * ventajas de vector sobre arreglo:
 * -Redimensionamiento automático
 *  El vector administra la memoria según el número de elementos.
 * 
 * -Acceso por indice O(1) constante
 *  Permite acceder rápidamente a cualquier elementos usando vec[i]
 * 
 * -Funciones integradas muy útiles
 *  como push_back(), size(), empty(), clear(), erase(), entre otras.
 * 
 * #include<vector>
 * 
 * vector<int> numeros;
 * vector<string> palabras;
 * 
 * numeros.push_back(10);
 * 
 * cout << numeros[0];
 * cout << mumeros.at(1);
 * 
 * recorrer vectores
 * 
 * for (int i = 0; i < numeros.size(); i++)
 * 
 * for (int n: numeros)
 * 
 * for (auto it = numeros.begin(); it != numeros.end(); it++)
 * 
 * funciones principales
 * 
 * push_back(x)
 * pop_back()
 * size()
 * empty()
 * clear()
 * erase()
 * insert()
 * at(i)
 * front()
 * back()
 * 
 */

 #include <vector>

 int main() {

    



    return 0;
 }

