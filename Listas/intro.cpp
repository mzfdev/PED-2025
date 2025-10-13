#include<iostream>

using namespace std;

//Paso por valor
void incrementar(int x){
    x = 30;
}

//Paso por referencia
void cambiarNumero(int &x){
    x = 30;
}

void cambiarNumero2(int &x){
    x = 40;
}

//Referencia al puntero
void vaciarPuntero(int*& puntero){
    int a = 20;
    int* puntero2 = &a;
    puntero = puntero2;
}

int main(){
    /*
    int x = 10;
    cambiarNumero(x);
    cout << x << endl;
    cambiarNumero2(x);
    cout << x << endl;
    */
    int x = 10;
    int* puntero = &x;

    cout << "Ubicacion actual"<< puntero << endl;
    vaciarPuntero(puntero);
    cout << "Ubicacion despues de vaciar"<< *puntero << endl;

    return 0;
}