#include <iostream>
#include "persona.h"
using namespace std;


void Persona::cargar(){

    cout<<"NOMBRE: ";
    cin>>nombre;

    cout<<"APELLIDO: ";
    cin>>apellido;

}

void Persona::mostrar(){

    cout<<"El nombre de la persona es "<<nombre<<" y su apellido es "<<apellido<<".";

}
