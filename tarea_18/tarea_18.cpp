#include <iostream>
#include <string>
#include <vector>
#include <limits>

struct Libro {
    std::string titulo;
    std::string autor;
    int paginas;
};

int mostrarMenu();
void agregarLibro(std::vector<Libro>& libros);
void ordenarLibros(std::vector<Libro>& libros);
void buscarLibro(const std::vector<Libro>& libros);
void mostrarLibro(const Libro& libro);

int main() {

    std::vector<Libro> libros;
    int opcion;

    std::cout<<"Bienvenidos al programa de biblioteca digital\n";

    do {
        opcion = mostrarMenu();

        switch (opcion) {
            case 1:
                agregarLibro(libros);
                break;
            case 2:
                buscarLibro(libros);
                break;
            case 3:
                ordenarLibros(libros);
                break;
            case 4:
                std::cout<<"Gracias por usar el programa\n";
                opcion = -1;
        }
    }while(opcion != -1);

    return 0;
}

int mostrarMenu() {
    int opcion;

    std::cout<<"Seleccione una opcion:\n";
    std::cout<<"1 Agregar libro.\n";
    std::cout<<"2 Buscar libro.\n";
    std::cout<<"3 Ordenar libros.\n";
    std::cout<<"4 salir\n";

    std::cin>>opcion;

    return opcion;
}

void agregarLibro(std::vector<Libro>& libros) {
    std::string nombre;
    std::string autor;
    int paginas;

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::cout<<"Ingrese el nombre del libro: ";
    std::getline(std::cin, nombre);

    std::cout<<"Ingrese el nombre del autor libro: ";
    std::getline(std::cin, autor);

    std::cout<<"Ingrese el numero de paginas: ";
    std::cin>>paginas;

    Libro libro;
    libro.titulo = nombre;
    libro.paginas = paginas;
    libro.autor = autor;

    libros.push_back(libro);
}

void buscarLibro(const std::vector<Libro>& libros) {
    std::string nombre;

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::cout<<"Ingrese el nombre del libro que desea buscar: ";
    std::getline(std::cin, nombre);

    for (const Libro& libro : libros) {
        if (libro.titulo == nombre) {
            mostrarLibro(libro);
        }
    }
}

void mostrarLibro(const Libro& libro) {
    std::cout<<"-------------------------------------------------------------\n";
    std::cout<<"El libro que eligio es "<<libro.titulo<<"\n";
    std::cout<<"tiene "<<libro.paginas<<"\n";
    std::cout<<"y el autor es "<<libro.autor<<"\n";
    std::cout<<"-------------------------------------------------------------\n";
}

void ordenarLibros(std::vector<Libro>& libros) {
    std::sort(libros.begin(), libros.end(),
            [](const Libro& a, const Libro& b) {
                return a.paginas < b.paginas;
            }
        );

    std::cout << "Libros ordenados por numero de paginas.\n";

    for (const Libro& libro : libros) {
        mostrarLibro(libro);
    }
}