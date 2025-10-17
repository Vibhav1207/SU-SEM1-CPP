#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5,6,9,0};
    int n = sizeof(arr) / sizeof(arr[0]); // size of array

    // Using for loop
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Using range-based for loop (C++11+)
    for(int x : arr) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
