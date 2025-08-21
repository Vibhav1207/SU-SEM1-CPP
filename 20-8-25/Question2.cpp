//WAP for summation of 2 numbers taken as user input using functions

#include <iostream>
using namespace std;

int summation(int a, int b) {
    return a + b;
}


int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    int sum = summation(a, b);
    cout << "Summation of " << a << " and " << b << " is " << sum << endl;
    return 0;
}