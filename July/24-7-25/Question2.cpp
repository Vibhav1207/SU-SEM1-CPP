//WAP to take user input of two integer value and then check which is larger . Print the larger value.
#include <iostream>
using namespace std;
int main() {
    int num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    if (num1 > num2) {
        cout << "The larger number is: " << num1 << endl;
    } else if (num2 > num1) {
        cout << "The larger number is: " << num2 << endl;
    } else {
        cout << "Both numbers are equal." << endl;
    }
}