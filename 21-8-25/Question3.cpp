//WAP to find product of 2 numbers using functions

#include <iostream>
using namespace std;

int product(int a, int b) {
    return a * b;
}


int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    int prod = product(a, b);
    cout << "Product of " << a << " and " << b << " is " << prod << endl;
    return 0;
}