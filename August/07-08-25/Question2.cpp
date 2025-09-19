//WAP to swap two numbers 

#include <iostream>
using namespace std;
int main() {
    int a , b;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    cout << "Before swapping: a = " << a << ", b =" << b << endl;
     a = a + b;
    b = a - b; 
    a = a - b; 
    cout << "After swapping without temp: a = " << a << ", b = " << b << endl;
    return 0;

}