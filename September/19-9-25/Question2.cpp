//Given a number print each digit seprate eg 1 2 3 4 outpur 4 3 2 1 

#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num; 
    cout << "Digits in reverse order: "; 
    if (num == 0) {
        cout << "0" << endl;
        return 0;
    }    
    if (num < 0) {
        num = -num; 
    }
    while (num > 0) {
        int digit = num % 10;  
        cout << digit << " "<<endl;
        num = num / 10;       
    }
    cout << endl;
    return 0;
}