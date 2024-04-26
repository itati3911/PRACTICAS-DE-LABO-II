#include <iostream>
using namespace std;

//DECLARACION DE CLASE
class Punto{
private:
    int x,y;

public:
    Punto();
    void setPunto(int,int);
    int getPuntoX();
    int getPuntoY();
};

//INICIALIZO CONSTRUCTOR
Punto::Punto(){
}

//INICIALIZO METODOS
void Punto::setPunto(int _x, int _y){
    x = _x;
    y = _y;
}

int Punto::getPuntoX(){
    return x;
}

int Punto::getPuntoY(){
    return y;
}


int main(){
    Punto punto1;

    punto1.setPunto(4,7);

    cout<<"Las coordenadas del punto son "<<punto1.getPuntoX()<<" para X y "<<punto1.getPuntoY()<<" para Y"<<endl;

return 0;
}
