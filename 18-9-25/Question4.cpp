//Print the pattern using 2d array
// * , ** , ***, ****

#include <iostream>
using namespace std;
int main() {
    int n = 4; 
    char pattern[4][5]; 

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j <= i) {
                pattern[i][j] = '*'; 
            } else {
                pattern[i][j] = ' ';     
            }
        }
        pattern[i][n] = '\0'; 
    }

    for (int i = 0; i < n; i++) {
        cout<<" ";
        cout << pattern[i] << endl;
    }

    return 0;
}