/* 
Print the pattern 
1 2 3 4 5
2 3 4 5
3 4 5
4 5
5
*/

#include <iostream>
using namespace std;
int main() {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        for (int j = i; j <= n; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}