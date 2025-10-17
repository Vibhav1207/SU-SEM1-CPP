//Write a function that takes input if two strings anad returns a concateneted string of the two string eg:- i/p = "ab" "cd" o/p = "abcd"

#include <iostream>
using namespace std;


string concatenateStrings(string str1, string str2) {
    return str1 + str2;
}

int main() {
    string add1 , add2;
    
    cout << "Enter first string: ";
    cin >> add1;
    
    cout << "Enter second string: ";
    cin >> add2;
    
    string result = concatenateStrings(add1,add2);
    
    cout << "Concatenated string: " << result << endl;
}
