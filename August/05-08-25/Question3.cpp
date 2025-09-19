//WAP to print the  multiplication table of 19 in the format, 19*1 = 19, 19*2 = 38, ..., 19*10 = 190
#include <iostream>
using namespace std;
int main() {
    int number = 19;
    for (int i = 1; i <= 10; i++) {
        cout << number << "*" << i << "=" << number * i << endl;
    }
}
