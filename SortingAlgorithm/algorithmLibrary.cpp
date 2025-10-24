#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int array[] = {5, 2, 9, 1, 5, 6};
    int n = sizeof(array)/sizeof(array[0]);

    sort(array, array+n);

    cout << "Sorted: ";
    for (int i = 0; i < n; i++){
        cout << array[i] << " ";
        cout << endl;
    }
    return 0;
}
