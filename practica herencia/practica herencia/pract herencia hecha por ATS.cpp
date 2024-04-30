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
    Estudiante(string, int, int, string); // Corrección: Añadí el tipo de dato del primer parámetro (int)
    void setLegajo(int);
    int getLegajo();
    void setCarrera(string);
    string getCarrera(); // Corrección: Cambié el tipo de retorno de void a string
    void mostrarLegajo();
    void mostrarCarrera();
};


//inicializo el constructor Persona
Persona::Persona(string _nombre, int _edad){
    nombre = _nombre;
    edad = _edad;
}

//inicializo el constructor Estudiante
Estudiante::Estudiante(string _nombre, int _edad, int _legajo, string _carrera) : Persona(_nombre, _edad){ // Corrección: Eliminé la coma extra y corregí el orden de los parámetros
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
void Estudiante::setLegajo(int _legajo){ // Corrección: Añadí el nombre del parámetro
    legajo = _legajo;
}

int Estudiante::getLegajo(){
    return legajo;
}

void Estudiante::setCarrera(string _carrera){ // Corrección: Añadí el nombre del parámetro
    carrera = _carrera;
}

string Estudiante::getCarrera(){ // Corrección: Cambié el tipo de retorno de void a string
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

   Estudiante estudiante1("Emanuela", 23, 2321312, "Contabilidad" );
   Estudiante estudiante2("Maricarmen", 33, 555, "Ciencias Agrarias");

   persona1.mostrarNombre();
   persona1.mostrarEdad();

   system("pause");

   persona2.mostrarNombre();
   persona2.mostrarEdad();

   system("pause");

   estudiante1.mostrarLegajo();
   estudiante1.mostrarCarrera();

   system("pause");

   estudiante2.mostrarLegajo();
   estudiante2.mostrarCarrera();

    return 0;
}












/*#include<iostream>
#include<stdlib.h>
using namespace std;

class Persona{
 private:
 int edad;
 string nombre;
 public:
 Persona(int,string);
 void MuestraD();
};
class Empleado : public Persona {
 private:
 float salario;
 string oficio;
 public:
 Empleado(int,string,float,string);
 void MdatosE();

};

class Estudiante : public Persona{
 private:
 string carreraU;
 int semestre;
 public:
 Estudiante(int,string,string,int);
 void MDatosE();
};
class Universitario : Estudiante{
 private:
 string universidad;
 public:
 Universitario(int,string,string,int,string);
 void MDDU();
};
Universitario::Universitario(int _edad ,string _nombre, string _carreraU ,int _semestre , string _universidad) : Estudiante(_edad,_nombre,_carreraU,_semestre){
 universidad= _universidad;
}
void Universitario::MDDU(){
 MDatosE();
 cout<<"Universidad: "<<universidad<<endl;
}

Estudiante::Estudiante(int _edad ,string _nombre ,string _carreraU ,int _semestre) : Persona(_edad,_nombre){
 carreraU=_carreraU;
 semestre=_semestre;
}
void Estudiante::MDatosE(){
 MuestraD();
 cout<<"Carrera Universitaria: "<<carreraU<<endl<< "Numero de semestre: "<<semestre<<endl;
}

Empleado::Empleado(int _edad ,string _nombre ,float _salario ,string _oficio) : Persona(_edad,_nombre){
 salario=_salario;
 oficio=_oficio;
}
void Empleado::MdatosE(){
 MuestraD();
 cout<<"Salario: "<<salario<<endl<<"Oficio: "<<oficio<<endl;
}


Persona::Persona(int _edad ,string _nombre){
 edad=_edad;
 nombre =_nombre;
}
void Persona::MuestraD(){
 cout<<"Nombre: "<<nombre<<endl<<"Edad: "<<edad<<endl;
}


int main(){
 Empleado e1=Empleado(19,"Alejandro",5000,"Ing.sistemas");
 Universitario u1=Universitario(20,"Taboada","Ing. Electronico",3,"Universidad Del Valle");
 cout<<"\nDatos universitario"<<endl;
 cout<<"\n";
 u1.MDDU();
 cout<<"\n";
 cout<<"\n Datos Empleado"<<endl;
 cout<<"\n";
 e1.MdatosE();






 system("pause");
 return 0;
}
*/
