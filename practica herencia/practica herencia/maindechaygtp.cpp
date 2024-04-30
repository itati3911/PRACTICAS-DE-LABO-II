#include <iostream>
using namespace std;

//CLASE PERSONA QUE ES LA SUPER CLASE
class Persona{
protected:
    string nombre;
    int edad;
public:
    Persona(string, int);
    void setNombre(string);
    string getNombre();
    void setEdad(int);
    int getEdad();
    void mostrarNombre();
    void mostrarEdad();
};

class Estudiante : public Persona{
protected:
    int legajo;
    string carrera;
public:
    Estudiante(string, int, int, string);
    void setLegajo(int);
    int getLegajo();
    void setCarrera(string);
    string getCarrera();
    void mostrarLegajo();
    void mostrarCarrera();
};

//inicializo el constructor Persona
Persona::Persona(string _nombre, int _edad){
    nombre = _nombre;
    edad = _edad;
}

//inicializo el constructor Estudiante
Estudiante::Estudiante(string _nombre, int _edad, int _legajo, string _carrera) : Persona(_nombre, _edad){
    legajo = _legajo;
    carrera = _carrera;
}

//metodos de Persona
void Persona::setNombre(string _nombre){
    nombre = _nombre;
}

string Persona::getNombre(){
    return nombre;
}

void Persona::setEdad(int _edad){
    edad = _edad;
}

int Persona::getEdad(){
    return edad;
}

void Persona::mostrarNombre(){
    cout<<"Nombre: "<<nombre<<endl;
}

void Persona::mostrarEdad(){
    cout<<"Edad: "<<edad<<endl;
}

//metodos de Estudiante
void Estudiante::setLegajo(int _legajo){
    legajo = _legajo;
}

int Estudiante::getLegajo(){
    return legajo;
}

void Estudiante::setCarrera(string _carrera){
    carrera = _carrera;
}

string Estudiante::getCarrera(){
    return carrera;
}

void Estudiante::mostrarLegajo(){
    cout<<"Legajo: "<<legajo<<endl;
}

void Estudiante::mostrarCarrera(){
    cout<<"Carrera: "<<carrera<<endl;
}

//MAIN
int main()
{
    Persona persona1("Felicitas", 50);
    Persona persona2("Josefo", 34);

    Estudiante estudiante1("Juan", 20, 2321312, "Contabilidad");
    Estudiante estudiante2("María", 22, 555, "Ciencias Agrarias");

    persona1.mostrarNombre();
    persona1.mostrarEdad();

    system("pause");

    persona2.mostrarNombre();
    persona2.mostrarEdad();

    system("pause");
estudiante1.mostrarNombre();
    estudiante1.mostrarEdad();
    estudiante1.mostrarLegajo();
    estudiante1.mostrarCarrera();

    system("pause");

    estudiante2.mostrarLegajo();
    estudiante2.mostrarCarrera();

    return 0;
}
