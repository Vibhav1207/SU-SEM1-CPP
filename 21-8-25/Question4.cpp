//WAP to find product of 2 numbers using functions but int user input should be in the function 

#include <iostream>
using namespace std;
int prod() {
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    return a*b;
}

int main() {
    int output = prod();
    cout<<"Product of two numbers is: "<<output;
}