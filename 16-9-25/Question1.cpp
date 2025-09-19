/*#include <iostream>
using namespace std;
int main() {
     char arr[5] = {'h','e','l','l','o'};
     for (int i=0;i<5;i++){
        for (int j=0;j<i;j++){
        }
        cout<< arr[i] << endl;
     }
    
} */

#include <iostream>
#include <string>
using namespace std;
int main() {
    string arr = "hello";
    for (int i = 0; i < arr.length(); i++) {
        cout << arr[i] << endl;
    }
}