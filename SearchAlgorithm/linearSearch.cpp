#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int array[] = {5, 2, 9, 1, 5, 6, 3};
    int n = sizeof(array)/sizeof(array[0]);

    int search = 3;
    for (int i = 0; i < n; i++){
        if (array[i] == search){
            cout << "Element found at index " << i << endl;
            break;
        }
    }
}
