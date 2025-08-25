#include<iostream>

using namespace std;

struct Direccion{
    string calle;
    string ciudad;
}

struct Persona{
    string nombre;
    int edad;
    Direccion direccion;
};

int main(){

    /*
    Persona persona1;
    persona1.nombre = "Juan";
    persona1.edad = 25;
    persona1.direccion = "Calle 123";
    
    cout<<"Nombre "<<persona1.nombre<<endl;
    cout<<"Edad "<<persona1.edad<<endl;
    cout<<"Direccion "<<persona1.direccion<<endl;
    */

    Persona persona2 = {
        "Maria", 30, {
            "Calle 1", "Ciudad 1"
        }
    };

    cout<<"Nombre "<<persona2.nombre<<endl;
    cout<<"Edad "<<persona2.edad<<endl;
    cout<<"Calle"<<persona2.direccion.calle<<endl;
    cout<<"Ciudad"<<persona2.direccion.ciudad<<endl;    

    return 0;
}