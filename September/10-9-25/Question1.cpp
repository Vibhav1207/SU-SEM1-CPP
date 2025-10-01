//WAp to to achive the follwoing array arr[8] = {2 , 4 , 6 ,8 ,10,12, 14,16}

#include <iostream>
using namespace std;
int main()
{
    int arr[8];
    for (int i = 0; i < 8; i++) {
        arr[i] = 2 * (i + 1);
    }
    cout << "Array elements: ";
    for (int i = 0; i < 8; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}