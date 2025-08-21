#include <iostream>
using namespace std;

int main(){

    int numeros[] = {1,2,3};

    for (int i = 0; i < 3; i++)
    {
        //cout << numeros[i] << endl;
    }

    int matrix[3][3] = {
        {1,2,3}, 
        {4,5,6}, 
        {7,8,9}
    };

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++)
        {
            cout << matrix[i][j] << endl;
        }
    }

    return 0;
}