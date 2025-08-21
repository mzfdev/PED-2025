#include <iostream>
#include <math.h>

using namespace std;

int sum(int a, int b);
int sum(int a, int b, int c);
void sum2(int a, int b);

int main(){
    //Funciones Internas
    /*
    int a = 5;
    cout<<sizeof(a);

    //Funciones de biblioteca
    cout<<sqrt(25);
    cout<<pow(2,3);
    cout<<round(2.5);
    cout<<ceil(2.5);
    cout<<floor(2.5);
    */

    //Funciones de usuario
    // ESTO YA NO!!!!!!!!!!!!
    int b = 10;
    int c = 20;
    int resultadoFinal = sum(b,c) + sum(5,10,1);
    cout<<"El resultado es "<<resultadoFinal;

    return 0;
}

//Funcion con retorno
int sum(int a, int b){
    int result = a + b;
    return result, a, b;
}

int sum(int a, int b, int c){
    int result = a + b + c;
    return result;
}

//Funcion sin retorno
void sum2(int a, int b){
    int result = a + b;
    cout<<"El resultado es "<<result;
}