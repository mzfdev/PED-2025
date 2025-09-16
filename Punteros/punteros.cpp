#include <iostream>

using namespace std;

int main(){
    //n es una variable que guarda un 10
    int n = 10;
    //p es una variable que guarda la ubicacion
    // en memoria de la variable que guarda un 10
    int* p = &n;

    cout<<"Valor n: "<<n<<endl;
    cout<<"Direccion de n: "<<&n<<endl;

    cout<<"Valor de p: "<<p<<endl;
    cout<<"A lo que apunta p "<<*p<<endl;

    *p = 11;

    cout<<"Nuevo valor de n: "<<n<<endl;

    return 0;
}