#include <iostream>

using namespace std;

int sum(int a, int b){
    int result = a + b;
    return result;
}

double sum(double a, double b){
    double result = a + b;
    return result;
}

int main (){

    auto result = sum(2.4,3.7868);
    auto result2 = sum(2,3);
    cout<<result<<endl;
    cout<<result2<<endl;

    return 0;
}