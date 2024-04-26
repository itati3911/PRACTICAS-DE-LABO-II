#include <iostream>
using namespace std;

int main(){
    int var, *puntero; //declaro una variable int var y un puntero a un entero puntero

    var = 15; //asigno un valor 15 a var
    puntero = &var; //asigno al puntero la direccion de memoria de var

    cout<<"el valor contenido en var es "<<var<<endl;
    cout<<"la dirección de memoria de var es "<<&var<<endl;
    cout<<"la direccion de memoria a la que apunta puntero es "<<puntero<<endl;
    cout<<"la direccion de memoria de puntero es "<<&puntero<<endl;
    cout<<"lo que contiene la direccion de memoria a la que apunta el puntero es "<<*puntero<<endl;

    *puntero = 100;

    cout<<"ahora que lo modifique desde el puntero, el valor de var es "<<var<<endl;








return 0;
}
