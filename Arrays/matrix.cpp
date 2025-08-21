#include <iostream>
using namespace std;

int main(){
    int N = 5;
    int matrix[N][N];

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            matrix[i][j] = (i+1) * (j+1);
        }
    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cout << matrix[i][j] << "\t";
        }
        cout<<endl;
    }

    return 0;
}