#include <iostream>
#include "ats.h"
using namespace std;

//DESARROLLO DE LOS METODOS

void Rectangulo::cargar(){
    cout<<"INGRESE UN VALOR DE LARGO PARA EL RECTANGULO"<<endl;
    cin>>largo;
    cout<<"INGRESE UN VALOR DE ANCHO PARA EL RECTANGULO"<<endl;
    cin>>ancho;

}

void Rectangulo::mostrar(){
    cout<<"EL LARGO DEL RECTANGULO ES "<<largo<<" Y EL ANCHO ES "<<ancho<<endl;

}

Rectangulo::Rectangulo(float _largo, float _ancho){ //INICIALIZO EL CONSTRUCTOR PARA INICIALIZAR LOS ATRIBUTOS
    largo = _largo;
    ancho = _ancho;
}

void Rectangulo::perimetro(){
    float per = (largo * 2)+(ancho * 2);
    cout<<"EL PERIMETRO DEL RECTANGULO ES "<<per<<endl;
}

void Rectangulo::area(){
    float sup = largo * ancho;
    cout<<"EL AREA DEL RECTANGULO ES "<<sup<<endl;
}
