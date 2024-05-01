#pragma once
#include "persona.h"

class Empleado:public Persona{

protected :
    int antiguedad;
    float sueldo;

public :
    void cargar();
    void mostrar();


};
