#include <iostream>
#include "examen_con_set_y_get.h"
using namespace std;

int main(){

    Examen reg;
    reg.cargar();
    cout << reg.getApellido() << " " << reg.getNombre() << " - " << reg.getNota() << endl;
    reg.mostrar();

    return 0;
}
