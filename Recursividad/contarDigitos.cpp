#include<iostream>
using namespace std;

//Enfoque recursivo
int contarDigitos(int n){
    //caso base
    if(n < 10) return 1;
    //caso recursivo
    return 1 + contarDigitos(n/10);
}

int main(){
    int n = 1234;
    cout<<contarDigitos(n);
    return 0;
}