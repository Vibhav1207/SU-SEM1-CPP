#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, int> square;
    
    for(int i = 1; i <= 20; i++) {
        square[i] = i * i; 
    }

    cout << "Numbers and their squares:" << endl;
    for(auto& pair : square) {
        cout << "Number: " << pair.first << ", Square: " << pair.second << endl;
    }
}