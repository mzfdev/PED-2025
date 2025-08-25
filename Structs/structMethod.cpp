#include<iostream>

using namespace std;

struct Rectangulo {
    int base;
    int altura;

    Rectangulo(int b, int h) : base(b), altura(h) {}

    int area() {
        return base * altura;
    }
};

struct TrianguloRectangulo : Rectangulo {
    TrianguloRectangulo(int b, int h) : Rectangulo(b, h) {}

    int area() {
        return (base * altura) / 2;
    }
};


int main(){
    Rectangulo rec1 = {10, 5};
    cout<<"Area: "<<rec1.area()<<endl;

    TrianguloRectangulo rec2 = {30, 20};
    cout<<"Area: "<<rec2.area()<<endl;

    return 0;
}
