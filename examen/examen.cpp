#include <iostream>
#include "examen.h"

using namespace std;


void Examen::cargar(){
            cout << "Apellido: ";
            cin >> apellido;
            cout << "Nombre: ";
            cin >> nombre;
            cout << "Materia: ";
            cin >> materia;
            cout << "Fecha (DD MM AAAA): ";
            cin >> dia >> mes >> anio;
            cout << "Calificaci�n: ";
            cin >> nota;
}

void Examen::mostrar(){
        cout << endl << apellido << ", " << nombre << " - " << dia <<
        "/" << mes << "/" << anio << " - Calificaci�n: " << nota;
}
