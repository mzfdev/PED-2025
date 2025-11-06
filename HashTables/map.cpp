#include<iostream>
#include<unordered_set>
#include<unordered_map>
#include<string>
using namespace std;

void insertar(unordered_set<string>& tablaHash, const string& valor, int edad){
    auto resultado = tablaHash.insert({valor, edad});
    // second: true / false
    if(resultado.second){
        cout<<"Se agrego correctamente"<<endl;
    }else{
        cout<<"No se agrego correctamente"<<endl;
    }
}

void eliminar(unordered_set<string>& tablaHash, const string& valor){
    // tablaHash.erase(valor) -> puede convertirse por si mismo en un true o false
    if(tablaHash.erase(valor)){
        cout<<"Se elimino correctamente"<<endl;
    }else{
        cout<<"El elemento no existe"<<endl;
    }
}

void buscar(unordered_set<string>& tablaHash, const string& valor){
    if(tablaHash.find(valor) != tablaHash.end()){
        cout<<"El elemento existe"<<endl;
    }else{
        cout<<"El elemento no existe"<<endl;
    }
}

void mostrarDatos(unordered_set<string>& tablaHash){
    if(tablaHash.empty()){
        cout<<"No hay nada"<<endl;
        return;
    }

    for(const auto& n : tablaHash){
        cout<<n<<endl;
        //cout<<n.size()<<endl;
    }
}

void limpiar(unordered_set<string>& tablaHash){
    tablaHash.clear();
}

int main(){
    unordered_map<string, int> edades = {
        //Clave - valor
        {"Ana", 25},
        {"Luis", 30},
        {"Pepe", 20},
        {"Marta", 20},
    };

    cout<<edades["Marta"]<<endl;

    edades["Marta"] = 26;

    //Jose se creara automaticamente
    edades["Jose"] = 28;

    return 0;
}