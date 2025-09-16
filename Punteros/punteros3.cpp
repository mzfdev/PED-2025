#include <iostream>

using namespace std;

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int x = 5, y = 6;
    cout<<"Antes del swap: "<<endl;
    cout<<"X: "<<x<<endl;
    cout<<"Y: "<<y<<endl;

    swap(&x, &y);

    cout<<"Despues del swap: "<<endl;
    cout<<"X: "<<x<<endl;
    cout<<"Y: "<<y<<endl;
    return 0;
}