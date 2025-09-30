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

void insertAtEnd(Node*& head, int value){
    Node* newNode = new Node{value, nullptr};

    if(head == nullptr){
        head = newNode;
        return;
    }

    Node* current = head;
    while(current->next != nullptr){
        current = current -> next;
    }
    current->next = newNode;
}

void printList(Node* head){
    Node* i = head;
    while( i != nullptr){
        cout<<i->data<<" -> ";
        i = i->next;
    }
}

void free(Node*& head){
    while(head != nullptr){
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

int main(){

    Node* lista1 = nullptr;
    
    int opc = 0;

    do{
        cout<<endl;
        cout<<"1. Insertar"<<endl;
        cout<<"2. Insertar al final"<<endl;
        cout<<"3. Imprimir"<<endl;
        cout<<"4. Liberar memoria"<<endl;
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
            int value2;
            cout<<"Ingrese un valor: ";
            cin>>value2;
            insertAtEnd(lista1, value2);
            break;
        case 3:
            printList(lista1);
            break;
        case 4:
            free(lista1);
            break;
        default:
            break;
        }
    }while(opc != 0);

    return 0;
}