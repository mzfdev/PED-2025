#include<iostream>
using namespace std;

//Enfoque recursivo
int factorial(int n){
    //Caso base
    if(n==0) return 1;
    //Caso recursivo
    return n * factorial(n - 1);
}

int main(){
    int n = 5;
    cout<<factorial(n);
    return 0;
}