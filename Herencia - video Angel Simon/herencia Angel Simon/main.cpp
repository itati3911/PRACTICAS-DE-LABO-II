#include <iostream>
#include<cstdlib>
#include "persona.h"
#include "empleado.h"
#include "director.h"
#include "profesor.h"
#include "alumno.h"

using namespace std;

int main(){


    Persona p;
    Empleado e;
    Director d;
    Profesor pro;
    Alumno a;

    cout<<"######## VIDEO DE HERENCIA DE ANGEL SIMON ########"<<endl;

    cout<<"********   LABORATORIO II TUP UTN FRGP    ********"<<endl;
        cout<<endl<<endl;


    cout<<"ESTO ES UNA PERSONA!"<<endl;
    p.cargar();
    p.mostrar();
    cout<<endl<<endl;

cout<<endl<<endl;
    cout<<"ESTO ES UN EMPLEADO!"<<endl;

e.cargar();
e.mostrar();
cout<<endl<<endl;
    cout<<"ESTO ES UN DIRECTOR!"<<endl;

d.cargar();
d.mostrar();
cout<<endl<<endl;
    cout<<"ESTO ES UN PROFESOR!"<<endl;
    pro.cargar();
pro.mostrar();
cout<<endl<<endl;
        cout<<"ESTO ES UN ALUMNO!"<<endl;
a.cargar();
a.mostrar();
cout<<endl<<endl;
cout<<"ALBRICIAS!!! HERENCIA REALIZADA CON EXITO!!!";






    return 0;
}
