//
// Created by Marcos Armando on 05/01/26.
//

#include <iostream>
#include <vector>
#include <string>
#include <limits>

struct Contacto {
    std::string nombre;
    std::string numero;
    std::string correo;
};

int mostrarMenu();
void agregarContacto(std::vector<Contacto>& agenda);
void buscarContacto(const std::vector<Contacto>& agenda);
void eliminarContacto(std::vector<Contacto>& agenda);
void mostrarTodosLosContactos(const std::vector<Contacto>& agenda);
void mostrarContacto(const Contacto& contacto);

int main () {
    std::vector<Contacto> agenda;
    int opcion;

    std::cout<<"Bienvenidos a la aplicacion de agenda de celular.\n";

    do {
        opcion = mostrarMenu();
        switch (opcion) {
            case 1:
                agregarContacto(agenda);
                break;
            case 2:
                buscarContacto(agenda);
                break;
            case 3:
                eliminarContacto(agenda);
                break;
            case 4:
                mostrarTodosLosContactos(agenda);
                break;
            case 5:
                std::cout<<"Gracias por haber usado el programa de agenda\n";
                opcion = -1;
                break;
        }
    }while(opcion != -1);

    return 0;
}

int mostrarMenu()
{
    int opcion;
    std::cout<<"Elija una opcion del siguiente menu:\n";
    std::cout<<"1 agregar un contacto nuevo\n";
    std::cout<<"2 buscar contacto\n";
    std::cout<<"3 eliminar contacto\n";
    std::cout<<"4 mostrar todos los contactos\n";
    std::cout<<"5 salir con el contacto\n";

    std::cin>>opcion;
    return opcion;
}

void agregarContacto(std::vector<Contacto>& agenda)
{
    std::string nombre;
    std::string numero;
    std::string correo;

    std::cout<<"Ingrese el nombre del nuevo contacto\n";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::getline(std::cin, nombre);

    std::cout<<"Ingrese el numero del contacto: ";
    std::getline(std::cin, numero);

    std::cout<<"Ingrese el correo del contacto: ";
    std::getline(std::cin, correo);

    Contacto contacto;
    contacto.nombre = nombre;
    contacto.numero = numero;
    contacto.correo = correo;

    agenda.push_back(contacto);
}

void buscarContacto(const std::vector<Contacto>& agenda)
{
    std::string nombre;

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout<<"Ingrese nombre a buscar: ";
    std::getline(std::cin, nombre);

    for (const Contacto& contact : agenda) {
        if (contact.nombre == nombre) {
            mostrarContacto(contact);
        }
    }
}

void eliminarContacto(std::vector<Contacto>& agenda)
{
    std::string nombre;

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout<<"Ingrese nombre a eliminar: ";
    std::getline(std::cin, nombre);

    for (auto it = agenda.begin(); it != agenda.end(); ++it) {
        if (it->nombre == nombre) {
            agenda.erase(it);
            std::cout << "Contacto eliminado.\n";
            return;
        }
    }
}

void mostrarTodosLosContactos(const std::vector<Contacto>& agenda)
{
    for(const Contacto& contact : agenda)
    {
        mostrarContacto(contact);
    }
}

void mostrarContacto(const Contacto& contacto)
{
    std::cout<<"----------------------------------------------------------\n";
    std::cout<<"nombre: "<<contacto.nombre<<"\n";
    std::cout<<"numero: "<<contacto.numero<<"\n";
    std::cout<<"correo: "<<contacto.correo<<"\n";
    std::cout<<"----------------------------------------------------------\n";
}