//Suppose you have given a array key = 12 , Write boolean fuxction with takes input of arry and key and searches the whole arry reutrns true or false if key prent return true else false

#include <iostream>
using namespace std;
bool search(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return true; 
        }
    }
    return false; 
}

int main() {
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 12;

    if (search(arr, size, key)) {
        cout << "Key " << key << " is present in the array." << endl;
    } else {
        cout << "Key " << key << " is not present in the array." << endl;
    }

}