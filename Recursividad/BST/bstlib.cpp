#include<iostream>
#include<set>
using namespace std;

int main(){
    set<int> arbol;

    arbol.insert(10);
    arbol.insert(6);
    arbol.insert(15);
    arbol.insert(4);

    for(int i : arbol){
        cout << i << " ";
    }

    int n = 15
    cout<<endl<<arbol.count(n);

    return 0;
}