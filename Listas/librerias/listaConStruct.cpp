#include<iostream>
#include<list>

using namespace std;

struct Cliente{
    int id;
    string nombre;
    int edad;
};

int main(){
    list<Cliente> clientes;

    //insertando elementos al final
    clientes.push_back({1, "Mauricio", 24}); 
    clientes.push_back({1, "Pedro", 40});
    clientes.push_back({1, "Jose", 21});

    //insertando elementos al inicio
    clientes.push_front({1, "Luis", 30});
    clientes.push_front({1, "Ana", 28});
    clientes.push_front({1, "Sofia", 22});

    //Si quiero solo leer dejo el const
    //Si quiero modificar quito el const
    for(const Cliente& c : clientes){
        cout<<c.id<<endl;
        cout<<c.nombre<<endl;
        cout<<c.edad<<endl;
        cout<<endl;
    }

    cout<<endl;

    //Eliminando elementos
    clientes.pop_front();
    clientes.pop_back();

    cout<<"Lista despues de eliminar:"<<endl;
    for(const Cliente& c : clientes){
        cout<<c.id<<endl;
        cout<<c.nombre<<endl;
        cout<<c.edad<<endl;
    }

    return 0;
}