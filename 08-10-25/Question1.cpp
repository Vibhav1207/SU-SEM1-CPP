#include <iostream>
using namespace std;

int main() {
    string str = "abcab";
    int arr[26] = {0};
    

    for(int i = 0; i < str.length(); i++) {
        arr[str[i] - 'a']++; 
    }
    
    
    cout << "Character frequencies:" << endl;
    for(int i = 0; i < 26; i++) {
        if(arr[i] > 0) { 
            cout << char(i + 'a') << ": " << arr[i] << endl;
        }
    }
}


