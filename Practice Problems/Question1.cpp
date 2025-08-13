//WAP to print hello world n times

#include <iostream>
using namespace std;
int main() {
    int a;
    cout<<"Enter the number of times you want to print hello world: ";
    cin>> a;
    for (int i=1; i<=a; i++){
        cout<<"Hello world"<<endl;
    }
}