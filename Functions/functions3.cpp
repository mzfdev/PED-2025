#include <iostream>

using namespace std;

//Template function
template <typename T>
T max_number(T a, T b){ return a>b ? a : b; }

//Template function with more than one parameter
template <typename T, typename U>
//decltype condiciona el "tipo de dato" que debe tener la funcion
auto max_number2(T a, U b) -> decltype( a>b ? a : b ){ 
    //Esto condiciona el valor que voy a retornar
    return a>b ? a : b; 
}

int main (){

    auto result = max_number(2,3);
    auto result2 = max_number(2.4,3.7868);
    cout<<result<<endl;
    cout<<result2<<endl;

    auto result3 = max_number2(3.7868,2);
    cout<<result3<<endl;

    return 0;
}