/*Given a string , write a function that returns the first non-reprating character of the string 
eg:- I/O :- race car
O/P :- e, as e is the first non reprating character 
*/

#include <iostream>
using namespace std;

char firstNonRepeating(string s) {
    for (int i = 0; i < s.size(); i++) {
        if (s[i] != ' ' && s.find(s[i]) == s.rfind(s[i])) 
            return s[i];
    }
    return '?';
}

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);
    
    char result = firstNonRepeating(s);
    if (result != '?') {
        cout << "First non-repeating character: " << result << endl;
    } else {
        cout << "No non-repeating character found" << endl;
    }
}