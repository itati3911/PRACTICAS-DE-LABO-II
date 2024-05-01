#pragma once
#include "persona.h"

class Alumno : public Persona{
protected:
    int legajo;
    float promedio;

public:
    void cargar();
    void mostrar();

};
