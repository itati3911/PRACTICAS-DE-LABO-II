#include <iostream>
using namespace std;

// Declaración de la clase Rectangulo
class Rectangulo {
private: // ATRIBUTOS DE LA CLASE
    float largo;
    float ancho;

public: // MÉTODOS
    Rectangulo(float _largo, float _ancho); // CONSTRUCTOR DE LA CLASE
    void cargar();
    void mostrar();
    void perimetro();
    void area();
};

// Definición del constructor
/*Rectangulo::Rectangulo(float _largo, float _ancho) {
    largo = _largo;
    ancho = _ancho;
}*/

// Definiciones de los métodos
void Rectangulo::cargar() {
    cout << "INGRESE UN VALOR DE LARGO PARA EL RECTANGULO" << endl;
    cin >> largo;
    cout << "INGRESE UN VALOR DE ANCHO PARA EL RECTANGULO" << endl;
    cin >> ancho;
}

void Rectangulo::mostrar() {
    cout << "EL LARGO DEL RECTANGULO ES " << largo << " Y EL ANCHO ES " << ancho << endl;
}

void Rectangulo::perimetro() {
    float per = (largo * 2) + (ancho * 2);
    cout << "EL PERIMETRO DEL RECTANGULO ES " << per << endl;
}

void Rectangulo::area() {
    float sup = largo * ancho;
    cout << "EL AREA DEL RECTANGULO ES " << sup << endl;
}

int main() {
    // Creación de objetos Rectangulo
    Rectangulo rec1(1, 2);
    Rectangulo rec2(4, 2);
    Rectangulo rec3(4, 5);

    cout << "RECTANGULO 1" << endl;
    rec1.cargar();
    rec1.mostrar();
    rec1.perimetro();
    rec1.area();
    cout << endl;

    cout << "RECTANGULO 2" << endl;
    rec2.cargar();
    rec2.mostrar();
    rec2.perimetro();
    rec2.area();
    cout << endl;

    cout << "RECTANGULO 3" << endl;
    rec3.cargar();
    rec3.mostrar();
    rec3.perimetro();
    rec3.area();
    cout << endl;

    system("pause");
    return 0;
}
