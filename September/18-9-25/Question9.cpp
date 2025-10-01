/* 
Print the pattern 
* * * * *
  * * * 
    *
*/

#include <iostream>
using namespace std;
int main() {
    int n = 3; 
    for (int i = 0; i < n; i++) {
       
        for (int j = 0; j < i * 2; j++) {
            cout << " ";
        }
        
        for (int k = 0; k < (2 * (n - i) - 1); k++) {
            cout << "* ";
        }
        cout << endl;
    }
}