#include <iostream>
using namespace std;

//PROTOTIPO DE FX
void cargarVector(int *v,int tam);

//main
int main (){

    int v[5], *p, i, *j, tam = 5;

    cargarVector(v,5);

    p = v;

    for(i=0;i<tam;i++) cout<<v[i];
    for(i=0;i<tam;i++) cout<<p[i];
    for(i=0;i<tam;i++) cout<<*(v+i);
    for(i=0;i<tam;i++) cout<<*(p+i);
    //for(i=0;i<tam;i++) cout<<*v++;
    for(i=0;i<tam;i++) cout<<*p++;
    for(j=v; j<v+5;j++) cout<<*j;



return 0;
}

//DESARROLLO DE FX
void cargarVector(int *v, int tam){

    for(int i=0;i<tam;i++){
        cout<<"ingrese un valor para agregar en el vector"<<endl;
        cin>>v[i];
    }

}
