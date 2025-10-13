#include<iostream>
#include<queue>

using namespace std;

int main(){
    //FIFO: First In Fist Out
    queue<int> numbers;

    numbers.push(1);
    numbers.push(2);
    numbers.push(3);
    numbers.push(4);

    cout<<"Primer elemento que saldra "<<numbers.front()<<endl;
    cout<<"Ultimo elemento que saldra "<<numbers.back()<<endl;

    numbers.pop();
    cout<<"Primer elemento que saldra "<<numbers.front()<<endl;

    return 0;
}