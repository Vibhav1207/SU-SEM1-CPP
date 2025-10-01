/* 
Print the pattern 
* * * * * 
  * * * 
    * 
  * * * 
* * * * * 
*/

#include <iostream>
using namespace std;
int main() {
    int n = 3; // middle row has 1 star
    
    // Upper half (including middle)
    for (int i = 0; i < n; i++) {
        // Print spaces
        for (int j = 0; j < i * 2; j++) {
            cout << " ";
        }
        // Print stars
        for (int k = 0; k < (2 * (n - i) - 1); k++) {
            cout << "* ";
        }
        cout << endl;
    }
    
    
    for (int i = n - 2; i >= 0; i--) {
        
        for (int j = 0; j < i * 2; j++) {
            cout << " ";
        }
        
        for (int k = 0; k < (2 * (n - i) - 1); k++) {
            cout << "* ";
        }
        cout << endl;
    }
    
    return 0;
}