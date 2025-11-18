#include<iostream>
#include<map>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

void registrarUsuario(map<string, vector<string>>& red, vector<string>& usuarios){
    int n;
    cout<<"Cuantos usuarios desea ingresar: ";
    cin>>n;

    for(int i=0; i<n; i++){
        string nombre;
        cin>>nombre;
        usuarios.push_back(nombre);
        red[nombre] = {};
    }
}


void crearConexiones(map<string, vector<string>>& red){
    int n;
    cout<<"Cuantas conexiones desea ingresar: ";
    cin>>n;

    for(int i=0; i<n; i++){
        string a,b;
        cout<<"Ingrese al usuario 1: ";
        cin>>a;
        cout<<"Ingrese al usuario 2: ";
        cin>>b;
        red[a].push_back(b);
        red[b].push_back(a);
    }
}

void mostrarRed(const map<string, vector<string>>& red){
    for(auto& par: red){
        cout<<par.first<<endl;
        for(string conexion: par.second){
            cout<<"-"<<conexion<<" "<<endl;
        }
    }
}

int main(){
    map<string, vector<string>> red;
    vector<string> usuarios;

    registrarUsuario(red, usuarios);
    crearConexiones(red);

    mostrarRed(red);

    return 0;
}