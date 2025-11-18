#include<iostream>
#include<map>
#include<sstream>
using namespace std;

int main(){
    string text = "hola buenas tardes hola";
    //string: palabra
    //int: cantidad de repeticiones
    map<string, int> frecuencia;

    string palabra;
    //"hola | buenas | tardes | hola"
    stringstream ss(text);

    while(ss >> palabra){
        // -> hola
        // -> buenas
        // -> tardes
        frecuencia[palabra]++;
        /*
        <"hola", 2>
        <"buenas", 1>
        <"tardes", 1>
        */
    }

    for(auto& par: frecuencia){
        //<"hola", 2>
        //<first, second>
        cout<<par.first<<": "<<par.second<<endl;
    }

    return 0;
}