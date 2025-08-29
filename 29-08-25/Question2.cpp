//WAP to swap 2 nunbers using swap by refrence without 3rs variable

#include <iostream>
using namespace std;
void swap(int &a, int&b){
   a = a+b;
   b =  a-b;
   a = a-b;

}

int main() {
    int a, b;
    cout << "Enter First number: ";
    cin >> a;
    cout << "Enter Second Number: ";
    cin >> b;

    cout << "Before Swapping a = " << a << " and b = " << b << endl;
    swap(a, b);
    cout << "After Swapping a = " << a << " and b = " << b << endl;
    return 0;
}