#include<iostream>
using namespace std;

//Enfoque recursivo
int fibonacci(int n){
    //Caso base: si es 0 retorna 0, si es 1 retorna 1
    if (n<= 1) return n;
    return fibonacci(n-1) + fibonacci(n-2);
}

int main(){
    int n = 3;
    cout<<fibonacci(n);
    return 0;
}