//
// Created by Marcos Armando on 10/12/25.
//

#include "tarea_13.h"
#include <iostream>
#include <string>

using namespace std;

string obtenerDia(int numero);
string obtenerFruta(int numero);

int main() {

   int registros[3][3], totalPorDia[3], totalPorFruta[3], totalGeneral;

   cout << "Bienvenido a la captura de su fruteria" << endl;
   totalGeneral = 0;
   for (int i = 0; i < 3; i++) {
      string dia = obtenerDia(i);
      cout << "Capture los registros para " << dia << endl;
      totalPorDia[i] = 0;
      for (int j = 0; j < 3; j++) {
         string fruta = obtenerFruta(j);
         cout << "por favor, capture el dato de " << fruta << " para el dia " << dia << endl;
         cin >> registros[i][j];
         totalGeneral += registros[i][j];
         totalPorDia[i] += registros[i][j];
      }
   }

	for (int i = 0; i < 3; i++) {
		totalPorFruta[i] = 0;
		for (int j = 0; j < 3; j++) {
			totalPorFruta[i] += registros[j][i];
		}
	}

	cout << "El total para el día " << obtenerDia(0) << " es " << totalPorDia[0] << endl;
	cout << "El total para el dia " << obtenerDia(1) << " es " << totalPorDia[1] << endl;
	cout << "El total para el dia " << obtenerDia(2) << " es " << totalPorDia[2] << endl;

	cout << "El total para la fruta " << obtenerFruta(0) << " es " << totalPorFruta[0] << endl;
	cout << "El total para la fruta " << obtenerFruta(1) << " es " << totalPorFruta[1] << endl;
	cout << "El total para la fruta " << obtenerFruta(2) << " es " << totalPorFruta[2] << endl;

	cout << "El total general es " << totalGeneral << endl;
}

string obtenerDia(int numero) {
   string dia;
   if (numero == 0) {
      dia = "lunes";
   } else if (numero == 1) {
      dia = "martes";
   } else {
      dia = "miercoles";
   }
   return dia;
};

string obtenerFruta(int numero) {
   string dia;
   if (numero == 0) {
      dia = "manzana";
   } else if (numero == 1) {
      dia = "platano";
   } else {
      dia = "mango";
   }
   return dia;
};