/*
Sistema para gestionar información de Universidad. 

Cada Universidad tiene: 
    Nombre de la universidad (string) 
    Dirección (string) 
    Un arreglo de 5 estructuras anidadas que representen las Facultades de la universidad. 

Cada Facultad tiene: 
    Número de facultad (int) 
    Nombre de la carrera principal (string) 
    Número de estudiantes inscritos (int) 

Menú 

- Solicitar datos: Permitir ingresar la información de la universidad y sus facultades. 

- Imprimir información: Mostrar los datos registrados de la universidad y sus facultades. 

- Calcular total de estudiantes: Sumar todos los estudiantes de las facultades. 

- Buscar carrera: Ingresar el nombre de una carrera y verificar si existe en alguna facultad. 

- Salir del programa 
*/

#include<iostream>
using namespace std;

struct Facultad{
    int numero_facultad;
    string carrera_principal;
    int numero_estudiantes;
};

const int cantidad_facultades = 5;

struct Universidad{
    string nombre;
    string direccion;
    Facultad facultades[cantidad_facultades];
};

Universidad solicitar_datos(){
    Universidad u;
    cout<<"Ingrese el nombre de u: "<<endl;
    getline(cin, u.nombre);
    cout<<"Ingrese la direccion de la u: "<<endl;
    getline(cin, u.direccion);

    for(int i = 0; i < cantidad_facultades; i++){
        cout<<"Ingrese el numero de la facultad: "<<endl;
        cin>>u.facultades[i].numero_facultad;
        cout<<"Ingrese la carrera principal de la facultad: "<<endl;
        getline(cin, u.facultades[i].carrera_principal);
        cout<<"Ingrese el numero de estudiantes de la facultad: "<<endl;
        cin>>u.facultades[i].numero_estudiantes;
        cin.ignore();
    }

    return u;
}

int main(){
    Universidad u;
    u = solicitar_datos();

    return 0;
}