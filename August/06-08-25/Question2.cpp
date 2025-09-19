//WAP to find the maximum of 3 numbers given by user input

#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cout <<"Enter three numbers:";
    cin >> a >> b >> c ;
    int max = a;
    if ( b > max) {
        max = b;
    }
    if ( c > max) {
        max = c;
    }
    cout << "The maximum number is: " << max << endl;
}