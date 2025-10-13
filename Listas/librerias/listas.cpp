#include<iostream>
#include<list>

using namespace std;

int main(){
    list<int> numbers;

    //insertando elementos al final
    numbers.push_back(10); 
    numbers.push_back(20);
    numbers.push_back(30);

    //insertando elementos al inicio
    numbers.push_front(40);
    numbers.push_front(50);
    numbers.push_front(60);

    for(int i : numbers){
        cout<<i<<"->";
    }
    cout<<endl;

    //Eliminando elementos
    numbers.pop_front();
    numbers.pop_back();

    cout<<"Lista despues de eliminar:"<<endl;
    for(int i : numbers){
        cout<<i<<"->";
    }

    return 0;
}