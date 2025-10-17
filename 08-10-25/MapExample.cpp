#include <iostream>
#include <map>
using namespace std;

int main() {
    // Declare a map (key is string, value is int)
    map<string, int> studentScores;
    
    // Insert values in different ways
    // Method 1: Using insert()
    studentScores.insert({"Alice", 95});
    
    // Method 2: Using square brackets
    studentScores["Bob"] = 87;
    studentScores["Charlie"] = 92;
    
    // Accessing and printing values
    cout << "Map contents:" << endl;
    for(const auto& pair : studentScores) {
        cout << "Key: " << pair.first << ", Value: " << pair.second << endl;
    }
    
    // Check if key exists
    string searchName = "Bob";
    if(studentScores.find(searchName) != studentScores.end()) {
        cout << "\nFound " << searchName << "'s score: " << studentScores[searchName] << endl;
    }
    
    // Size of map
    cout << "\nNumber of elements in map: " << studentScores.size() << endl;
    
    return 0;
}