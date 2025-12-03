#include <iostream> //librerías de I/O
#include <string> // librerías de String

using namespace std;

int main() {

    int n1 = 1000, n2 = 11332, resultado;
    resultado = n1 + n2;
    cout << resultado << endl;

    int numeroEntero = 12;
    double variableDouble = 12.36;
    double resultado1 = numeroEntero + variableDouble;
    cout << resultado1 << endl;;


    int numeroParaDividir1 = 13;
    double resultadoDivision1 = numeroParaDividir1 / 3;
    double resultadoDivision2 = (double) numeroParaDividir1 / 3;
    double resultadoDivision3 = numeroParaDividir1 / (double) 3;

    cout << "1: " << resultadoDivision1 << endl;
    cout << "2: " << resultadoDivision2 << endl;
    cout << "3: " << resultadoDivision3 << endl;


    //casteo static_cast<double>

    int numeroEntero2 = 13;
    int variableCasteada = static_cast<double>(numeroEntero2) / 3;

    cout << "4: " << variableCasteada << endl;


    //char y su código ASCII

    char letra = 'A';
    int codigo = letra;

    cout << codigo << endl;

    int letraB = 66;
    char letraBchar = static_cast<char>(letraB);

    cout << letraBchar << endl;


    // string

    string text = "Hola Mundo";
    string entero = "45";
    string flotante = "45.235";

    int valorInt = stoi(entero); // stoi sirve para convertir texto a enteros
    double valorDouble = stod(flotante); // stod sirve para convertir texto a double

    cout << valorInt + 10 << endl;
    cout << valorDouble * 2 << endl;

    //convert values integers to strings ---> to_string()

    float valorTest = 21.56;

    string valorTestToString = to_string(valorTest);

    cout << valorTestToString << endl;


    return 0;
}