#pragma once
#include "empleado.h"

class Director : public Empleado{

protected:
    char titulo[50];

public:
    void cargar();
    void mostrar();
};
