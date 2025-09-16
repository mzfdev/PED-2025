#include <iostream>
using namespace std;

int main(){
    int n;

    do{
        cout<<"Ingrese la cantidad de elementos"<<endl;
        cin>>n;

        //New: Reservo memoria
        int* vector = new int[n];

        for(int i = 0; i < n; i++){
            cout<<"Ingrese el elemento #"<<i<<" "<<endl;
            cin>>vector[i];
        }

        cout<<"Los elementos son: "<<endl;
        for(int i = 0; i < n; i++){
            cout<<vector[i]<<endl;
        }   
        cout<<endl;
        //Delete: Libero la memoria
        delete[] vector;
    }while(n != 0);

    return 0;
}