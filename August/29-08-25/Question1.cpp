//WAP to swap 2 nunbers using swap by refrence

#include <iostream>
using namespace std;
void swapbyRef(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a, b;
    cout << "Enter First number: ";
    cin >> a;
    cout << "Enter Second Number: ";
    cin >> b;

    cout << "Before Swapping a = " << a << " and b = " << b << endl;
    swapbyRef(&a, &b);
    cout << "After Swapping a = " << a << " and b = " << b << endl;
}