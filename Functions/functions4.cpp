#include <iostream>
#include <functional>

using namespace std;

int sum(int a, int b){
    int result = a + b;
    return result;
}

int main (){
    int a = 5;
    function<int(int,int)> f = sum;

    int result = f(2,3);
    cout<<result<<endl;

    f = [](int a, int b){
        return a * b;
    };

    int result2 = f(2,3);
    cout<<result2<<endl;

    int n = 5;
    auto sumarN = [n](int a){
        return a + n;
    };

    cout<<sumarN(20)<<endl;

    return 0;
}