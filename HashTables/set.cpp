#include<iostream>
#include<unordered_set>
#include<string>
using namespace std;

void insertar(unordered_set<string>& tablaHash, const string& valor){
    auto resultado = tablaHash.insert(valor);
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
    unordered_set<string> nombres;

    insertar(nombres, "Ana");
    insertar(nombres, "Luis");
    insertar(nombres, "Pepe");
    insertar(nombres, "Ana");  //Error

    mostrarDatos(nombres);

    buscar(nombres, "Luis");
    eliminar(nombres, "Luis");

    cout<<endl;
    mostrarDatos(nombres);

    limpiar(nombres);
 
    return 0;
}