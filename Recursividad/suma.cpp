#include<iostream>
using namespace std;

//Enfoque recursivo
int sumarN(int n){
    //Caso base
    if(n == 0) return 0;
    //Caso recursivo
    return n + sumarN(n-1);
}

int main(){
    int n = 5;
    sumarN(n);
    return 0;
}