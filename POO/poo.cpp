#include<iostream>
using namespace std;

class Vehiculo{
    //Atributos
    private:
        string marca;
        string modelo;

    public:
        //Metodo Constructor
        Vehiculo(string _marca, string _modelo){
            marca = _marca;
            modelo = _modelo;
        }

        //Getters
        string getMarca(){
            return marca;
        }

        void setMarca(string _marca){
            marca = _marca;
        }

        virtual void mostrarInfo(){
             cout<<"Marca: "<<marca<<endl;
            cout<<"Modelo: "<<modelo<<endl;
        }

        //Destructor virtual
        virtual ~Vehiculo(){}
};

class Auto: public Vehiculo{
    private:
        int numPuertas;

    public:
        Auto(string _marca, string _modelo, int _numPuertas)
            : Vehiculo(_marca, _modelo), numPuertas(_numPuertas){}

       void mostrarInfo() override {
            Vehiculo::mostrarInfo();
            cout<<"Puertas: "<<numPuertas<<endl;
        }
};

class Moto: public Vehiculo{
    private:
        string tipo;

     public:
        Moto(string _marca, string _modelo, string _tipo)
            : Vehiculo(_marca, _modelo), tipo(_tipo){}

       void mostrarInfo() override {
            Vehiculo::mostrarInfo();
            cout<<"Tipo: "<<tipo<<endl;
        }
};

int main(){
    Vehiculo* lista[3];
    
    lista[0] = new Auto("Toyota", "Corolla", 4);
    lista[1] = new Moto("Honda", "Civic", "Deportiva");

    lista[0]->mostrarInfo();
    cout<<endl;
    lista[1]->mostrarInfo();

    return 0;
}