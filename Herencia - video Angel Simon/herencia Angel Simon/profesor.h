#pragma once
#include "empleado.h"

class Profesor : public Empleado{

protected:

    char materia[50];

public:
    void cargar();
    void mostrar();




};
