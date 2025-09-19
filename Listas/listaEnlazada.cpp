#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

void insert(Node*& head, int value){
    Node* newNode = new Node{value, head};
    head = newNode;
}

void printList(Node* head){
    Node* i = head;
    while( i != nullptr){
        cout<<i->data<<" -> ";
        i = i->next;
    }
}

int main(){

    Node* lista1 = nullptr;
    
    int opc = 0;

    do{
        cout<<endl;
        cout<<"1. Insertar"<<endl;
        cout<<"2. Imprimir"<<endl;
        cout<<"0. Salir"<<endl;
        cin>>opc;
        switch (opc)
        {
        case 1:
            int value;
            cout<<"Ingrese un valor: ";
            cin>>value;
            insert(lista1, value);
            break;
        case 2:
            printList(lista1);
            break;
        default:
            break;
        }
    }while(opc != 0);

    return 0;
}