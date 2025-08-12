//WAP a program to check if number is ppstive and even if yes cout yes else cout no 

#include <iostream>
using namespace std;
int main() {
    int num1;
    cout << "Enter a number: ";
    cin >> num1;
    if (num1 > 0) {
        if (num1 % 2 ==0){
            cout << "Yes, the number is positve and even";
        }
        else{
            cout << "No, the number is positive but not even";
        }
    }
    else{
            cout << "No, the number is not positive";
        }
    }
// Solved through nested if else