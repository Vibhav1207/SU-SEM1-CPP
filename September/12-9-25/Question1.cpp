//Given a array find the largest and smallest element arr[] = { 21, 7, 2 , 45 , 69}
#include <iostream>
using namespace std;

int main() {
    int arr[] = { 21, 7, 2 , 45 , 69};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout << "Largest element: " << arr[n-1] << endl;
    cout << "Smallest element: " << arr[0] << endl;
}