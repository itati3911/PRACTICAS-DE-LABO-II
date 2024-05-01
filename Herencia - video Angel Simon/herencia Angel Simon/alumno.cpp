#include <iostream>
#include "alumno.h"
using namespace std;

void Alumno::cargar(){
Persona::cargar();
cout<<"LEGAJO: ";
cin>>legajo;

cout<<"PROMEDIO: ";
cin>>promedio;

}

void Alumno::mostrar(){
Persona::mostrar();

cout<<" Su legajo de alumno es "<<legajo<<" y su promedio es "<<promedio<<"."<<endl;


}
