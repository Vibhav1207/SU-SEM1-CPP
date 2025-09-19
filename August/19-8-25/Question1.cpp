//WAP a function check the the number is odd or even and return true or false

#include <iostream>
using namespace std;

bool isOdd(int num) {
    if (num % 2 != 0) {
        cout<<"True"<<endl;
        return true;
    }
    else{
        cout<<"False"<<endl;
        return false;
    }
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    isOdd(number);
}
