#include <iostream>
#include<stdlib.h>
using namespace std;

//DECLARACION
class Persona{
    private://Atributos
        string nombre;
        int edad;
    public://Metodos
        Persona(string, int);
        void mostrarPersona();

};

class Alumno : public Persona{
private:
    string codigoAlumno;
    int notaFinal;
public:
    Alumno(string, int, string, int);
    void mostrarAlumno();
};

//DEFINICION
Persona::Persona(string _nombre, int _edad){//constructor de la clase madre o super clase
    nombre = _nombre;
    edad = _edad;

}

Alumno::Alumno(string _nombre, int _edad, string _codigoAlumno, int _notaFinal) : Persona( _nombre,  _edad){
    codigoAlumno = _codigoAlumno;
    notaFinal = _notaFinal;
}

void Persona::mostrarPersona(){
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Edad: "<<edad<<endl;
}

void Alumno::mostrarAlumno(){
    mostrarPersona();
    cout<<"Codigo de Alumno: "<<codigoAlumno<<endl;
    cout<<"Nota final: "<<notaFinal<<endl;
}

//MAIN
int main(){
    Persona persona1("Lucho", 44);

    Alumno alumno1("Pepe", 54, "A24", 2);
    Alumno alumno2("Martita", 33, "B12", 10);

    alumno1.mostrarAlumno();
    cout<<endl;
    alumno2.mostrarAlumno();
    cout<<endl;
    persona1.mostrarPersona();
    cout<<endl;

    system ("pause");

return 0;
}




