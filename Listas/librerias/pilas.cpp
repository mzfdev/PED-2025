#include<iostream>
#include<stack>

using namespace std;

int main(){
    //LIFO: Last In First Out
    stack<int> numbers;    

    numbers.push(1);
    numbers.push(2);
    numbers.push(3);
    numbers.push(4);

    cout<<"Elemento en el tope "<<numbers.top()<<endl;

    //recorriendo elementos
    // numbers.empty() -> true : si esta vacia false: si no esta vacia
    /*
    while(!numbers.empty()){
        cout<<numbers.top()<<endl;
        //numbers.pop();
    }

    do{
        cout<<numbers.top()<<endl;
        numbers.pop();
    }while(opc != 0)
    */

    numbers.pop();
    numbers.pop();

    cout<<"Elemento en el tope despues de pop "<<numbers.top()<<endl;

    return 0;
}