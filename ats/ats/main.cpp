/*CONSTRUYA UNA CLASE RECTANGULO QUE TENGA LOS SIGUIENTES ATRIBUTOS: LARGO Y ANCHO, Y LOS METODOS AREA Y PERIMETRO*/

#include <iostream>
#include "ats.h"
using namespace std;

int main(){

   Rectangulo rec1= Rectangulo(1,2);
   Rectangulo rec2(4,2);
   Rectangulo rec3(4,5);

   cout<<"RECTANGULO 1"<<endl;
   rec1.cargar();
   rec1.mostrar();
   rec1.perimetro();
   rec1.area();
   cout<<endl;

   cout<<"RECTANGULO 2"<<endl;
   rec2.cargar();
   rec2.mostrar();
   rec2.perimetro();
   rec2.area();
   cout<<endl;


   cout<<"RECTANGULO 3"<<endl;
   rec3.cargar();
   rec3.mostrar();
   rec3.perimetro();
   rec3.area();
   cout<<endl;



    system("pause");
    return 0;
}
