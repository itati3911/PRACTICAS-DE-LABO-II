#include <iostream>
#include "director.h"
using namespace std;

void Director::cargar(){
    Empleado::cargar();

cout<<"TITULO: ";
cin>>titulo;

}

void Director::mostrar(){
Empleado::mostrar();

cout<<" El titulo que posee es "<<titulo<<".";


}
