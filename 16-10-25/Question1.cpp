#include <iostream>
#include <map>

using namespace std;
int main() {
    map <char, int> mp;
    string s;
    cout << "Enter a string: ";
    getline(cin,s);
    for (int i =0; i<s.length(); i++) {
        mp[s[i]]++;
    }
    for (auto& pair : mp) {
        cout << "Key: " << pair.first << ", Value: " << pair.second <<
        endl;
    }
}
