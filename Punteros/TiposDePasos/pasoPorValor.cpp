#include<iostream>
using namespace std;

//Paso por valor
// int a es solo una copia del valor de a
void cambiarValor(int a){
    a = 20;
}

//Paso por referencia
//int& a es la direccion de memoria de a
//Todo lo que le pase a int& a le pasara a la variable original
void cambiarValorReferencia(int& a){
    a = 0;
}

//Paso por referencia de punteros
//int*& a es la direccion de memoria de un puntero
//Todo lo que le pase a int& a le pasara al puntero original
void cambiarValorReferenciaPtr(int*& a){
    a = nullptr;
}

int main(){
    int a = 10;
    int* ptr = &a;

    cout<<"ptr = "<<ptr<<endl;

    cambiarValorReferenciaPtr(ptr);

    cout<<"ptr = "<<ptr<<endl;
    
    return 0;
}