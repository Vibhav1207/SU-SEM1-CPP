#include <iostream>
using namespace std;
int main() {
    int numBottles, numExchange;   
    cout << "Enter the number of filled bottles: ";
    cin >> numBottles;  
    cout << "Enter the exchange rate (empty bottles needed for 1 filled): ";
    cin >> numExchange; 
    int totalDrinkable = 0;
    int emptyBottles = 0;
    totalDrinkable += numBottles;
    emptyBottles = numBottles;
    while (emptyBottles >= numExchange) {
        int newFilledBottles = emptyBottles / numExchange;
        totalDrinkable += newFilledBottles;
        emptyBottles = (emptyBottles % numExchange) + newFilledBottles;
    }
    cout << "\nTotal drinkable water bottles: " << totalDrinkable << endl;
}