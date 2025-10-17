//Create a map with the key balues 1 , 2 , 3, 4, and values 1 , 4 , 9, 16

#include <iostream>
#include <map>
using namespace std;
int main() {
    map <int , int> numbers;
    numbers[1] = 1;
    numbers[2] = 4;
    numbers[3] = 9;
    numbers[4] = 16;

    cout << "Numbers and their Value:" << endl;
    for(auto& pair : numbers) {
        cout << "Key: " << pair.first << ", Value: " << pair.second << endl;
    }
    
}