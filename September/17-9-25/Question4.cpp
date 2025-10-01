#include <iostream>
using namespace std;
int main() {
    string str = "CSE SU";

    for (int i = 0; i < 4; i++) {
        if (i < 3)
            cout << str[i] << endl;
        else
            cout << str[2] << endl; 
    }
   
    for (int i = 4; i < 6; i++) {
        cout << str[i] << endl;
    }
}