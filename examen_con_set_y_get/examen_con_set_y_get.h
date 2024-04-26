#pragma once

class Examen {

    private:
        int dia, mes, anio, nota;
        char apellido[50], nombre[50], materia[50];
    public:
        const char * getApellido();
        const char * getNombre();
        void setApellido(const char *);
        void setNombre(const char *);
        int getNota();
        void setNota(const int);
// Declaraciones de los demás métodos setters y getters.

        void cargar();
        void mostrar();
};






