#include <iostream>
#include <cstdarg>

using namespace std;

int suma(int count, ...){
    //con args capturo los argumentos 1,2 y 3
    va_list args;
    // con va_start me ubico en el primer elemento (el 1)
    va_start(args, count);

    int total = 0;
    for(int i = 0; i < count; i++){
        //va_arg pasa automaticamente de elemento en elemento
        // por cada iteracion
       total += va_arg(args, int);
    }

    // con va_end libero la memoria
    va_end(args);
    return total;
}

int main (){
    cout<<suma(4, 1, 2, 3,4);

    return 0;
}