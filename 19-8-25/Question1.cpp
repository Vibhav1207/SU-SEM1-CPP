//WAP a function check the the number is odd or even and return true or false

#include <iostream>
using namespace std;

bool isOdd(int num) {
    if (num % 2 != 0) {
        return true;
    }
    return false;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (isOdd(number)) {
        cout << number << " is odd and true." << endl;
    } else {
        cout << number << " is even and false." << endl;
    }

    return 0;
}
