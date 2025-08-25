#include<iostream>

using namespace std;

struct Alumno{
    string nombre;
    double nota;
};

int main(){
    
    Alumno alumnos[3] = {
        {"Juan", 8.5},
        {"Maria", 9.0},
        {"Pedro", 7.5}
    };

    for(int i=0; i<3; i++){
        cout<<"Nombre: "<<alumnos[i].nombre<<endl;
        cout<<"Nota: "<<alumnos[i].nota<<endl;
    }

    return 0;
}