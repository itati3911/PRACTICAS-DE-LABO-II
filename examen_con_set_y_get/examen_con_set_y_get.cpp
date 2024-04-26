#include <iostream>
#include <cstring>
#include "examen_con_set_y_get.h"

using namespace std;


void Examen::cargar()
{
    int calificacion;
    cout << "Apellido: ";
    cin >> apellido;
    cout << "Nombre: ";
    cin >> nombre;
    cout << "Materia: ";
    cin >> materia;
    cout << "Fecha (DD MM AAAA): ";
    cin >> dia >> mes >> anio;
    cout << "Calificación: ";
    cin >> calificacion;
    setNota(calificacion);
}
void Examen::mostrar()
{
    cout << endl << apellido << ", " << nombre << " - " << dia <<
         "/" << mes << "/" << anio << " - Calificación: " << nota;
}
void Examen::setApellido(const char *nuevoApellido)
{
    strcpy(apellido, nuevoApellido);
}
const char * Examen::getApellido()
{
    return apellido;
}
void Examen :: setNombre(const char *nuevoNombre){
    strcpy(nombre, nuevoNombre);

}
const char *Examen::getNombre(){
    return nombre;
}
void Examen::setNota(const int nuevaNota)
{
    if(nuevaNota >= 1 && nuevaNota <= 10)
    {
        nota = nuevaNota;
    }
    else
    {
        nota = 0;
    }
}
int Examen::getNota()
{
    return nota;
}
