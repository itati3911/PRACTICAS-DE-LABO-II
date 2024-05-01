#include <iostream>
#include "empleado.h"
using namespace std;

void Empleado::cargar(){
    Persona::cargar();

cout<<"ANTIGUEDAD: ";
cin>>antiguedad;

cout<<"SUELDO: $";
cin>>sueldo;


}

void Empleado::mostrar(){
    Persona::mostrar();
cout<<" Su antiguedad es "<<antiguedad<<" años y su sueldo es $"<<sueldo<<".";

}
