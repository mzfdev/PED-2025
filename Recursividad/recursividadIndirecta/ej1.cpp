#include<iostream>
using namespace std;

void functionA(int n);
void functionB(int n);
void functionC(int n);

void functionA(int n){
    if(n>0){
        cout<<n<<" ";
        functionB(n-2);
    }
}

void functionB(int n){
    if(n>0){
        cout<<n<<" ";
        functionC(n-1);
    }
}

void functionC(int n){
    if(n>0){
        cout<<n<<" ";
        functionA(n-3);
    }
}

int main(){
    functionA(16);
    return 0;
}