#include <iostream>
#include "profesor.h"
using namespace std;


void Profesor::cargar(){
    Empleado::cargar();
    cout<<"MATERIA: ";
    cin>>materia;
}

void Profesor::mostrar(){
Empleado::mostrar();
cout<<" La materia que dicta es "<<materia<<"."<<endl;
}
