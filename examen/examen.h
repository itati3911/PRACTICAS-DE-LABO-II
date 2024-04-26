#pragma once

class Examen{
    private:
        int dia, mes, anio, nota;
        char apellido[50], nombre[50], materia[50];
    public:
        void cargar();
        void mostrar();
};
