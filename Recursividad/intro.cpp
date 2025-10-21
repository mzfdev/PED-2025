#include<iostream>
using namespace std;

//Enfoque Iterativo
int contarHastN(int n){
    for(int i=0;i<=n;i++){
        cout<<i<<endl;
    }
}

//Enfoque recursivo
void contarHastNRecursivo(int n){
    if(n == 0) return; //Caso Base
    contarHastNRecursivo(n-1); //Caso Recursivo
    cout<<n;
}

int main(){
    int n = 5;
    contarHastNRecursivo(n);
    return 0;
}