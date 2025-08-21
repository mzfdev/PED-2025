#include <iostream>
using namespace std;

int main(){
    int alumnos = 3;
    int examenes = 4;

    int notas[alumnos][examenes] = {
        {10,5,3,8},
        {5,6,7,8},
        {9,10,5,8}
    };

    for(int i = 0; i < alumnos; i++){
        int suma = 0;
        for(int j = 0; j < examenes; j++){
            suma = suma + notas[i][j];
        }
        double media = (double)suma/examenes;
        cout << "El alumno " << i;
        cout << " tiene una media de " << media << endl;
        cout<<endl;
    }

    return 0;
}