#include<iostream>

using namespace std;

//Abstraccion : de abajo hacia arriba
//Herencia : de arriba hacia abajo
struct Animal {
    //atributos
    string nombre;
    int n_patas;

    //metodos
    void emitir_sonido(){
        cout<<"*emite un sonido"<<endl;
    }
};

struct Perro : Animal {
    void emitir_sonido(){
        cout<<"*hace guau"<<endl;
    }
};

struct Gato : Animal {
    void emitir_sonido(){
        cout<<"*hace miau"<<endl;
    }
};
//Herencia

int main(){
    Perro perro1;
    perro1.nombre = "Firulais";
    perro1.n_patas = 4;
    perro1.emitir_sonido();

    Gato gato1;
    gato1.nombre = "Michi";
    gato1.n_patas = 4;
    gato1.emitir_sonido();

    return 0;
}
