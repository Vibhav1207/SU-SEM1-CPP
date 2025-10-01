/* 
Print the pattern 
* * * * 
* * * * 
* * * * 
*/

#include <iostream>
using namespace std;
int main() {
    int rows = 3;
    int cols = 4;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}