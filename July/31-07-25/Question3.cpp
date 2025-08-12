//Write a c++ code to check if a year is a leap year.Year divisible by 4 are leap year,but if a year is divisble by 100 
// it should also be divisible by 400 to be a leap year.
#include <iostream>
using namespace std;
int main() {
    int year;
    cout<<"Enter a year:";
    cin >> year;
    if (year % 4 ==0) {
        if (year % 100 ==0){
            if (year % 400 ==0){
                cout << year << " is a leap year." << endl;
            } 
        else {
                cout << year << " is not a leap year." << endl;
            }
        }
    }
}