//WAP to reverse a digit and print the reversed integer varibale 

#include <iostream>
using namespace std;
int main() {
    int num, reverse = 0;
    cout << "Enter an integer:";
    cin >> num;
    while (num != 0){
        int digit = num % 10;
        reverse = reverse * 10 + digit;
        num /= 10;
    }
    cout << "Reversed integer: " << reverse << endl;
}