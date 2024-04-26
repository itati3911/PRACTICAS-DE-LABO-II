#include <iostream>
#include <cstring>
#include "examen_constructor.h"

using namespace std;

Examen::Examen(){
dia=mes=anio=siglo=nota=0;
strcpy(materia, "");
strcpy(apellido, "");
strcpy(nombre, "");
}
Examen::Examen(int d, int m, int a, int s){
dia=d;
mes=m;
anio=a;
siglo=s;
nota = 0;
strcpy(materia, "");
strcpy(apellido, "");
strcpy(nombre, "");
}
Examen::~Examen(){
cout << "Llamado al destructor de examen" << endl;
}
void Examen::mostrar(){
cout << endl << apellido << ", " << nombre << " - " << dia <<
"/" << mes << "/" << anio <<"/" <<siglo <<  " - Calificación: " << nota;
}
