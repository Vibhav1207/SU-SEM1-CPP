//Check  if given string is a pallindrome , create a function with type boolean is palindrome return ture and if not return false

#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string str) {
    int l = 0;
    int r = str.length() - 1;
    
    while (l < r) {
        if (str[l] != str[r]) {
            return false;
        }
        l++;
        r--;
    }
    return true;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    
    if (isPalindrome(input)) {
        cout << "\"" << input << "\" is a palindrome." << endl;
    } else {
        cout << "\"" << input << "\" is not a palindrome." << endl;
    }
    
    return 0;
}