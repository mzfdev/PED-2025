/*
Crear un programa que permita gestionar una agenda de contactos.
    1) Se debe almacenar en un array simple (con maximo de 100 contactos) 
    la siguiente informacion por cada contacto
        - nombre
        - telefono
        - email
    2) El usuario debe poder elegir entre las siguientes opciones por medio 
    de un menu.
        - Mostrar agenda completa.
        - Agregar contacto nuevo.
        - Buscar un contacto (Mostrar la posicion).
        - Editar un contacto.
        - Eliminar un contacto.
    3) Se debe asegurar una estructura de codigo limpia y reutilizable.
*/

#include <iostream>

using namespace std;

struct Contacto{
    string nombre;
    string telefono;
    string email;
};

const int contactos_maximos = 100;
Contacto agenda[contactos_maximos];
int totalContactos = 0;

void mostrarAgenda(Contacto agenda[], int n){
    cout<<"Agenda de contactos\n";

    if(n == 0){
        cout<<"No hay contactos \n";
        return 0;   
    }
        
    for(int i = 0; i < n; i++){
        cout<<"Nombre: "<<agenda[i].nombre<<endl;
        cout<<"Telefono: "<<agenda[i].telefono<<endl;
        cout<<"Email: "<<agenda[i].email<<endl;
    }
}

int agregarContacto(Contacto agenda[], int n){
    if(n >= contactos_maximos){
        cout<<"Agenda llena \n";
        return n;
    }
    Contacto nuevo_contacto;
    cout<<"Ingrese el nombre: ";
    getline(cin >> ws, nuevo_contacto.nombre);
    cout<<"Ingrese el Telefono: ";
    getline(cin, nuevo_contacto.telefono);
    cout<<"Ingrese el Email: ";
    getline(cin, nuevo_contacto.email);

    agenda[n] = nuevo_contacto;
    cout<<"Contacto creado\n";
    return n + 1;
}

int buscarContacto(Contacto agenda[], int n, string nombre){
    for(int i = 0; i < n; i++){
        if(agenda[i].nombre == nombre){
            return i;
        }
    }
    //Esto significa que el for finalizo y no encontro el elemento
    return -1;
}

void editarContacto(Contacto agenda[], int n){
    string nombre;
    cout<<"Nombre del contacto que desea editar: ";
    getline(cin>>ws, nombre);

    int pos = buscarContacto(agenda, n, nombre);

    if(pos == -1){
        cout<"No se ha encontrado el contacto a editar"<<endll
        return;
    }

    cout<<"Editanto contacto: "<<agenda[pos].nombre<<endl;
    cout << "Nuevo telefono ";
    getline(cin, agenda[pos].telefono);
}

void eliminarContacto(Contacto agenda[], int n){
    string nombre;
    cout<<"Nombre del contacto que desea eliminar: ";
    getline(cin>>ws, nombre);

    int pos = buscarContacto(agenda, n, nombre);
    if(pos == -1){
        cout<<"No se ha encontrado el contacto o ya fue eliminado"<<endl;
        return;
    }

    for(int i = pos; i < n - 1; i++){
        agenda[i] = agenda[i-1]
    }

    return n - 1;
}

void mostrarEncontrado(Contacto agenda[], int n){
    string nombre;
    cout<<"Nombre del contacto que desea mostrar: ";
    getline(cin>>ws, nombre);

    int pos = buscarContacto(agenda, n, nombre);
    if(pos == -1){
        cout<<"No se ha encontrado el contacto"<<endl;
        return;
    }
    
    cout<<"Contacto encontrado en la posicion: "<<pos<<endl;
    cout<<"Nombre: "<<agenda[pos].nombre<<endl;
    cout<<"Telefono: "<<agenda[pos].telefono<<endl;
    cout<<"Email: "<<agenda[pos].email<<endl;
}

void mostrarMenu(){
    cout<<"Seleccione una opcion"<<endl;
    cout<<"1. Mostrar agenda completa"<<endl;
    cout<<"2. Agregar contacto nuevo"<<endl;
    cout<<"3. Mostrar contacto encontrado"<<endl;
    cout<<"4. Editar un contacto"<<endl;
    cout<<"5. Eliminar un contacto"<<endl;
    cout<<"6. Salir"<<endl;
}

void ejecutarAgenda(){
    int opcion;
    do{
        mostrarMenu();
        cin>>opcion;

        switch(opcion){
            case 1: 
                mostrarAgenda(agenda, totalContactos);
                break;
            case 2: 
                totalContactos = agregarContacto(agenda, totalContactos);
                break;
            case 3: 
                mostrarEncontrado(agenda, totalContactos);
                break;
            case 4:
                editarContacto(agenda, totalContactos);
                break;
            case 5:
                totalContactos = eliminarContacto(agenda, totalContactos);
                break;
            case 6:
                cout<<"Saliendo..."<<endl;
                break;
            default:
                cout<<"Opcion no valida"<<endl;
        }
    }while(opcion != 6);
}

int main(){
    ejecutarAgenda();
    return 0;
}