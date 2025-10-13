#include<iostream>
#include<queue>
#include<string>

using namespace std;

int main(){
    queue<string> jugadores;
    int opcion;

    do{
        cout<<"1. Agregar jugador"<<endl;
        cout<<"2. Mostrar orden de turnos"<<endl;
        cout<<"3. Avanzar (rotar)"<<endl;
        cout<<"4. Salir"<<endl;
        cout<<"Ingrese una opcion: ";
        cin>>opcion;
        if(!cin){
            cin.clear();
            cin.ignore(1000,'\n');
            cout<<"Entrada no valida. Intente de nuevo."<<endl;
            continue;
        }
        switch(opcion){
            case 1:{
                string nombre;
                cout<<"Ingrese nombre del jugador"<<endl;
                cin>>nombre;
                jugadores.push(nombre);
                break;
            }
            case 2:{
                if(jugadores.empty()){
                    cout<<"No hay jugadores"<<endl;
                }else{
                    cout<<"Orden de turnos: "<<endl;
                    queue<string> temp = jugadores;
                    while(!temp.empty()){
                        cout<<temp.front();
                        temp.pop();
                        if(!temp.empty()) cout <<" -> ";
                    }
                    cout<<endl;
                }
                break;
            }
            case 3:{
                string actual = jugadores.front();
                jugadores.pop();
                jugadores.push(actual);
                cout<<"Turno de "<<actual<<" ha avanzado."<<endl;
                break;
            }
        }

    }while(opcion != 4);

    return 0;
}