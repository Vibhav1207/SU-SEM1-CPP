#include <iostream>
using namespace std;
int main() {
    string str = "CSE SU";
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == 'E') {
            continue;
        cout << str[i] << endl;
    }
}
}