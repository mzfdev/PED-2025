#include <iostream>
using namespace std;

int main(){
    //x es una variable que guarda un 10
    int x = 10;
    //p es una variable que guarda la ubicacion
    //de la variable que guarda un 10
    int* p = &x;
    //pp es una variable que guarda la ubicacion
    //de la variable que guarda la ubicacion un 10
    // de la variable que guarda el 10
    int** pp = &p;
    int*** ppp = &p;
    int**** pppp = &p;

    cout<<"Valor de x"<<x<<endl;
    cout<<"Valor de p"<<p<<endl;
    cout<<"Valor de pp"<<pp<<endl;

    return 0;
}