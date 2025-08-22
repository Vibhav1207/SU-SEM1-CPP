//Write a function for factorial of a user input number

#include<iostream>
using namespace std;

int fact() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    long long factorial = 1;
    for(int i = 1; i <= n; i++) {
        factorial *= i;
    }
    cout << "Factorial of " << n << " is " << factorial << endl;
    return 0;
}

int main() {
    fact();
}