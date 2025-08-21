//WAP a function check the the number is odd or even

#include <iostream>
using namespace std;
 int checkOddEven(int num) {
    if(num%2 ==0){
        return 0;
    }
    else{
        return 1; 
    }
 }
 int main () {
    int number;
    cout << "Enter a number: ";
    cin>>number;
    if(checkOddEven(number) == 0){
        cout << number << " is even." << endl;
    }
    else{
        cout << number << " is odd." << endl;
 }
}