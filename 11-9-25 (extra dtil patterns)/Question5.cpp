//WAP to print the pattern 1 , 1 2 , 1 2 3 , 1 2 3 4
#include <iostream>
using namespace std;
int main() {
    int n = 4;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if (i == 1)
                cout << 1 << " ";
            else
                cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}

