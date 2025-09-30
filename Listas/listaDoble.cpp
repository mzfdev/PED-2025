#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* prev;
};

void insert(Node*& head, int data){
    Node* newNode = new Node{data, head, nullptr};

    if(head != nullptr){
        head->prev = newNode;
    }

    head = newNode;
}

void insertAtEnd(Node*& head, int data){
    Node* newNode = new Node{data, nullptr, nullptr};
    //En caso de que la lista este vacia
    if(head == nullptr){
        head = newNode;
        return;
    }

    Node* current = head;
    while(current->next != nullptr){
        current = current->next;
    }
    current->next = newNode;
    newNode->prev = current;
}

//Imprimir la lista hacia adelante y luego hacia atras
void printList(Node* head){
    Node* current = head;
    while(current != nullptr){
        cout<<current->data<<"->";
        current = current->next;
    }
}

void printListReverso(Node* head){
    Node* current = head;
    while(current != nullptr){
        cout<<current->data<<"->";
        if(current->next == nullptr){
            break;
        }
        current = current->next;
    }

    while(current != nullptr){
        cout<<current->data<<"->";
        current = current->prev;
    }
}

void free(Node*& head){
    while(head != nullptr){
        Node* temp = head;
        head = head -> next;
        delete temp;
    }
}

bool search(Node* head, int value){
    Node* current = head;
    while(current != nullptr){
        if(current->data == value){
            return true;
        }
        current = current->next;
    }
    return false;
}

void deleteValue(Node*& head, int value){
    if(head == nullptr) return;

    if(head->data == value){
        Node* temp = head;
        head = head->next;
        if(head != nullptr){
            head->prev = nullptr;
        }
        delete temp;
        return;
    }

    Node* current = head;
    while(current-> next != nullptr && 
        current->next->data != value){
            current = current->next;
    }

    if(current->next != nullptr){
        Node* temp = current->next;
        current->next = current->next->next;
        if(current->next != nullptr){
            current->next->prev = current;
        }
        delete temp;
    }
}

int main(){
    Node* lista1 = nullptr;
    //Puedo crear todas las listas que quiera
    //Sin preocuparme por el tamaño
    Node* lista2 = nullptr;
    int opc = 0;
    do{
        cout<<endl<<"1. Insertar al inicio"<<endl;
        cout<<"2. Insertar al final"<<endl;
        cout<<"3. Imprimir lista"<<endl;
        cout<<"4. Liberar memoria"<<endl;
        cout<<"5. Buscar valor"<<endl;
        cout<<"6. Eliminar valor"<<endl;
        cout<<"7. Salir"<<endl;
        cin>>opc;
        switch(opc){
            case 1:
                int data;
                cout<<"Ingrese un numero: ";
                cin>>data;
                insert(lista1, data);
                break;
            case 2:
                cout<<"Ingrese un numero: ";
                cin>>data;
                insertAtEnd(lista1, data);
                break;
            case 3:
                printListReverso(lista1);
                break;
            case 4:
                cout<<"Liberando memoria..."<<endl;
                free(lista1);
                break;
            case 5:
                int value;
                cout<<"Ingrese un valor a buscar: ";
                cin>>value;
                if(search(lista1, value)){
                    cout<<"El valor se encuentra en la lista"<<endl;
                }else{
                    cout<<"El valor no se encuentra en la lista"<<endl;
                }
                break;
            case 6:
                cout<<"Ingrese un valor a eliminar: ";
                cin>>value;
                deleteValue(lista1, value);
                break;
            case 7:
                cout<<"Saliendo..."<<endl;
                break;
            default:
                cout<<"Opcion incorrecta"<<endl;
                break;
        }
    }while(opc != 7);

    return 0;
}