/*
2. Eliminar duplicados y ordenar números
Dada una lista de enteros, eliminar duplicados y mostrarlos ordenados.
*/
#include<iostream>
#include<set>
#include<vector>

using namespace std;

int main(){
    vector<int> numeros = {7,2,3,2,7,1,6};
    set<int> numerosOrdenados(
        numeros.begin(),
        numeros.end()
    );

    for(int numero: numerosOrdenados){
        cout<<numero<<" ";
    }

    return 0;
}