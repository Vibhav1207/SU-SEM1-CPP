#include <iostream>
using namespace std;
int main() {
    int numBottles, numExhange, drinkable,emptybottles;
    cout<<"Enter number of bottles";
    cin>>numBottles;
    cout<<"Enter exchange rate";
    cin>>numExhange;

    drinkable += numBottles;
    emptybottles += numBottles;

    while (emptybottles >= numBottles){
        int newFilledBottles = emptybottles / numExhange;
        drinkable += newFilledBottles;
        
        emptybottles = (emptybottles % numExhange) + newFilledBottles;
    }
    
    cout << "\nTotal drinkable water bottles: " << drinkable << endl;
    }

