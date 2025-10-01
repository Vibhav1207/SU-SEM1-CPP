/*Print the pattern 
* * * *
* * * *
* * * *
* * * *
*/

#include <iostream>
using namespace std;
int main() {
    char z = '*';
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            cout << z << " ";
        }
        cout << endl;
    }
}