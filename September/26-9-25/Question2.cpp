//Find maximum product of any 3 numbers in array

#include <iostream>
using namespace std;

int main() {
    int arr[100], size, maxProduct = 0;
    
    cout << "Enter size: ";
    cin >> size;
    
    cout << "Enter elements: ";
    for (int i = 0; i < size; i++) cin >> arr[i];
    
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            for (int k = j + 1; k < size; k++) {
                int product = arr[i] * arr[j] * arr[k];
                if (product > maxProduct) maxProduct = product;
            }
        }
    }
    
    cout << "Maximum product: " << maxProduct << endl;
}
