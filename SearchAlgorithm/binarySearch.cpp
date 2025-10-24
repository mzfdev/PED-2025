#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int array[] = {5, 2, 9, 5, 6, 3};
    int n = sizeof(array)/sizeof(array[0]);
    //Ordenando array
    sort(array, array+n);
    int inicio = 0;
    int fin = n - 1;

    //Si quieren usar libreria
    //bool encontrado = binary_search(array, array+n, search);

    int search = 3;

    while(inicio <= fin){
        int mitad = (inicio + fin)/2;    
    
        if(array[mitad] == search){
            cout << "Element found at index " << mitad << endl;
            break;
        }else if(array[mitad] < search){
            //Verificar si esta en la mitad derecha
            inicio = mitad + 1;
        }else{
            //Verificar si esta en la mitad izquierda
            fin = mitad - 1;
        }
    }  
    
    return 0;
}
