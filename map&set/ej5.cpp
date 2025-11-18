/*5. Caso practico
Sistema de biblioteca: libros, autores y géneros
    Enunciado

    Crea un programa que:

    Defina un struct Libro con:
        string titulo
        string autor
        int anio

    Use un map<int, Libro> para almacenar la información completa de cada libro.

    clave = ID del libro
    valor = información del libro

    Use un map<string, set<int>> para agrupar libros por género.
    clave = nombre del género → "Ficción", "Historia", "Ciencia"
    valor = conjunto de IDs de libros

    Debe permitir:
    Mostrar todos los géneros y los IDs de sus libros.
    Mostrar información completa de todos los libros en un género.
    Evitar duplicados usando set.
*/
#include<iostream>
#include<set>
#include<map>
#include<string>

using namespace std;

struct Libro{
    string titulo;
    string autor;
    int anio;
};

int main(){
    // {1, {"1984", "George Orwell", 1950} }
    map<int, Libro> libros;

    libros[1] = {"1984", "George Orwell", 1950};
    libros[2] = {"La iliada", "Homero", 1950};
    libros[3] = {"La odisea", "Homero", 1950};
    libros[4] = {"Cien años de soledad", "Gabriel García Márquez", 1967};
    libros[5] = {"Romeo y Julieta", "Shakespeare", 1967};

    //{"Tragedia Grieda", {2,3} }
    map<string, set<int>> generos;
    generos["Tragedia Griega"].insert(2);
    generos["Tragedia Griega"].insert(3);
    generos["Ficción"].insert(1);
    generos["Realismo Magico"].insert(4);
    generos["Tragedia"].insert(5);

    cout<<"Mostrando generos y sus libros"<<endl;
    // O(n * m)
    for(auto& par: generos){
        //Recorre lista de generos
       cout<<par.first<<": ";
       for(int id: par.second){
        //Recorre lista de libros por cada genero
            cout<<id<<" ";
       }
       cout<<endl;
    }

    for(int id: generos["Ficción"]){
        cout<<id<<endl;
        cout<<libros[id].titulo<<endl;
        cout<<libros[id].autor<<endl;
        cout<<libros[id].anio<<endl;
        cout<<endl;
    }

    return 0;
}