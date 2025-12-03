#include <iostream>
#include <string>

using namespace std;

int main() {

    string nombre;

    cout << "Digite su nombre" << endl;
    getline(cin, nombre);
    cout << nombre << endl;


    int N1, N2;

    cout << "Digite dos numeros:  " << endl;
    cin >> N1 >> N2;

    cout << "Suma: " << N1 + N2 << endl;
    cout << "Resta: " << N1 - N2 << endl;
    cout << "Multiplicacion: " << N1 * N2 << endl;
    cout << "Division: " << N1 / N2 << endl;
    cout << "Modulo: " << N1 % N2 << endl;

    cout << N1 << " == " << N2 << ": " << (N1 == N2) << endl;
    cout << N1 << " != " << N2 << ": " << (N1 != N2) << endl;    
    cout << N1 << " < " << N2 << ": " << (N1 < N2) << endl;
    cout << N1 << " > " << N2 << ": " << (N1 > N2) << endl; 
    cout << N1 << " <= " << N2 << ": " << (N1 <= N2) << endl;
    cout << N1 << " >= " << N2 << ": " << (N1 >= N2) << endl;    
    
    cout << "AND: " << (N1 != N2 && N2 < N1) << endl;
    cout << "OR: " << (N1 == N2 || N2 > N1) << endl;
    cout << "NOT: " << !(N1 != N2) << endl;

    bool B1 = true, B2 = true, B3 = false;

    cout << "AND: " << (B1 && B2) << endl;
    cout << "OR: " << (B2 || B3) << endl;
    cout << "NOT: " << !(B3) << endl;

    // +=, -=, *=, /=, %=

    return 0;
}