//WAP program to check if the number is positive or even then cout yes else cout no
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (n > 0 || n % 2 == 0) {
        cout << "yes the number is positive or even" << endl;
    } else {
        cout << "no the number is not positive or even" << endl;
    }
}