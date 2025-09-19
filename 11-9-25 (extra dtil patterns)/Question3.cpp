//WAP to print pattern 2 , 4 6 , 8 10 12, 14 16 18 20

#include <iostream>
using namespace std;
int main() {
    int value = 2;
    for (int row = 1; row <= 4; row++) {
        for (int col = 1; col <= row; col++) {
            cout << value << " ";
            value += 2;
        }
        cout << endl;
    }

    // Print left-aligned triangle pattern with stars
    int n = 4;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}
