// Given a array find the largest num 

/*#include <iostream>
using namespace std;
int main() {
    int arr[100],size,largest;
    cout << "Enter the size of the array: ";
    cin >> size;
    cout << "Enter " << size << " elements: ";
    for(int i=0; i<size; i++) {
        cin >> arr[i];
    }
    largest = arr[0];
    for(int i=1; i<size; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
    }
    cout << "Largest element " << largest << endl;
}*/

#include <iostream>
using namespace std;
int main() {
    int arr[5] = {8, 2, 3, 4, 5};
    int highest1=0, highest2=0;
    for (int i =0;i<5;i++) {
        if (arr[i]>highest1) {
            highest2=highest1;
            highest1=arr[i];
        }
        else if (arr[i]>highest2) {  
            highest2=arr[i];
        }
    }
    cout << "Largest element " << highest1 << endl;
    cout << "Second largest element " << highest2 << endl;
}
