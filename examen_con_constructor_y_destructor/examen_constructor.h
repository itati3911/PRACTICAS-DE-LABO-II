#pragma once

class Examen{
private:
int dia, mes, anio, siglo, nota;
char apellido[50], nombre[50], materia[50];
public:
Examen();
Examen(int, int, int, int);
int getNota();
void setNota(const int);
void mostrar();
~Examen();
};
