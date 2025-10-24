#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <algorithm> 
using namespace std;

struct Libro {
    string titulo;
    string autor;
    int anioPublicacion;
    int paginas;
};

struct Biblioteca {
    string nombre;
    string ubicacion;
    vector<Libro> libros; 
};

void solicitarInformacion(list<Biblioteca> &bibliotecas) {
    Biblioteca b;
    cout << "Ingrese el nombre de la biblioteca: ";
    getline(cin >> ws, b.nombre);

    cout << "Ingrese la ubicacion de la biblioteca: ";
    getline(cin >> ws, b.ubicacion);

    char continuar = 's';
    
    cout << "\nAhora ingrese los libros de la biblioteca:" << endl;
    
    while (continuar == 's' || continuar == 'S') {
        Libro l;
        cout << "Titulo: ";
        getline(cin >> ws, l.titulo);
        cout << "Autor: ";
        getline(cin >> ws, l.autor);
        cout << "Anio de publicacion: ";
        cin >> l.anioPublicacion;
        cout << "Numero de paginas: ";
        cin >> l.paginas;
        cin.ignore();
        
        b.libros.push_back(l);
        
        cout << "\n¿Desea agregar otro libro? (s/n): ";
        cin >> continuar;
        cin.ignore();
    }

    bibliotecas.push_back(b);
    cout << "Biblioteca registrada\n";
}

void mostrarInformacion(const list<Biblioteca> &bibliotecas) {
    if (bibliotecas.empty()) {
        cout << "\nNo hay bibliotecas.\n";
        return;
    }

    for (const auto &b : bibliotecas) {
        cout << "\nNombre: " << b.nombre << endl;
        cout << "Ubicacion: " << b.ubicacion << endl;
        cout << "Libros:\n";
        for (const auto &l : b.libros) {
            cout<< l.titulo <<endl;
        }
    }
}

void ordenarBibliotecas(list<Biblioteca> &bibliotecas) {
    bibliotecas.sort([](const Biblioteca &a, const Biblioteca &b) {
        return a.nombre < b.nombre; // Se ordenan por nombre de forma alfabetica
    });
    cout << "\nBibliotecas ordenadas por nombre.\n";
}

void buscarBiblioteca(const list<Biblioteca> &bibliotecas) {
    if (bibliotecas.empty()) {
        cout << "\nNo hay bibliotecas registradas.\n";
        return;
    }

    string nombreBusqueda;
    cout << "\nIngrese el nombre de la biblioteca a buscar: ";
    getline(cin, nombreBusqueda);

    auto encontrada = find_if(bibliotecas.begin(), bibliotecas.end(),
        [&](const Biblioteca &b) { return b.nombre == nombreBusqueda; });

    if (encontrada != bibliotecas.end()) {      
        cout << "\nBiblioteca encontrada:\n";
        cout << "Nombre: " << encontrada->nombre << endl;
        cout << "Ubicacion: " << encontrada->ubicacion << endl;
        cout << "Libros:\n";
        for (const auto &l : encontrada->libros) {
            cout << "  - " << l.titulo << " (" << l.autor << ", "
                 << l.anioPublicacion << ") [" << l.paginas << " páginas]\n";
        }
    } else {
        cout << "\nNo se encontro una biblioteca con ese nombre.\n";
    }
}

int main() {
    list<Biblioteca> bibliotecas;
    int opcion;

    do {
        cout << "1. Agregar biblioteca\n";
        cout << "2. Mostrar informacion\n";
        cout << "3. Ordenar bibliotecas\n";
        cout << "4. Buscar biblioteca\n";
        cout << "5. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;
        cin.ignore();

        switch (opcion) {
            case 1:
                solicitarInformacion(bibliotecas);
                break;
            case 2:
                mostrarInformacion(bibliotecas);
                break;
            case 3:
                ordenarBibliotecas(bibliotecas);
                break;
            case 4:
                buscarBiblioteca(bibliotecas);
                break;
            default:
                cout << "\nOpcion invalida, intente de nuevo.\n";
        }

    } while (opcion != 5);

    return 0;
}
