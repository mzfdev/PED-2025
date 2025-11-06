#include<iostream>
using namespace std;

struct Nodo{
    int data;
    Nodo* izq;
    Nodo* der;
};

Nodo* crearNodo(int valor){
    Nodo* nuevo_nodo = new Nodo();
    nuevo_nodo->data = valor;
    nuevo_nodo->izq = nullptr;
    nuevo_nodo->der = nullptr;
    return nuevo_nodo;
}

Nodo* insertar(Nodo* raiz, int valor){
    if(raiz == nullptr){
        return crearNodo(valor);
    }
    if(valor < raiz->data){
        raiz->izq = insertar(raiz->izq, valor);
    }else if(valor > raiz->data){
        raiz->der = insertar(raiz->der, valor);
    }

    return raiz;
}

void inorder(Nodo* raiz){
    if(raiz != nullptr){
        //Izquierda
        inorder(raiz->izq);
        //raiz
        cout << raiz->data << " ";
        //derecha
        inorder(raiz->der);
    }
}

void preorder(Nodo* raiz){
    if(raiz != nullptr){
        //raiz
        cout << raiz->data << " ";
        //Izquierda
        preorder(raiz->izq);
        //derecha
        preorder(raiz->der);
    }
}

void postorder(Nodo* raiz){
    if(raiz != nullptr){
        //Izquierda
        postorder(raiz->izq);
        //derecha
        postorder(raiz->der);
        //raiz
        cout << raiz->data << " ";
    }
}

void liberar(Nodo* raiz){
    if(raiz != nullptr){
        //I
        liberar(raiz->izq);
        //d
        liberar(raiz->der);
        //r
        delete raiz;
    }
}

int main(){
    Nodo* arbol1 = nullptr;

    arbol1 = insertar(arbol1, 10);
    arbol1 = insertar(arbol1, 6);
    arbol1 = insertar(arbol1, 15);
    arbol1 = insertar(arbol1, 4);

    cout << "Inorder: ";
    inorder(arbol1);
    cout << endl;

    liberar(arbol1);
    return 0;
}