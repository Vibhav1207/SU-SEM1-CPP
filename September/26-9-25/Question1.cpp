#include <iostream>
using namespace std;

int main() {
    int arr[100], size;
    
    cout << "Enter size: ";
    cin >> size;
    
    cout << "Enter elements: ";
    for (int i = 0; i < size; i++) cin >> arr[i];
    
    
    // for (int i = 0; i < size / 2; i++) {
    //     int temp = arr[i];
    //     arr[i] = arr[size - i - 1];
    //     arr[size - i - 1] = temp;
    // }
    
    // cout << "Reversed: ";
    // for (int i = 0; i < size; i++) cout << arr[i] << " ";
    // cout << endl;
    for(int i=4;i>=0;i--){
        cout<<arr[i]<<" ";
    }
    return 0;
}