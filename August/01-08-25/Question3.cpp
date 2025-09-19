//WAP to print only even numbers from 10 -50 ( 10 and 50 included) 

#include <iostream>
using namespace std;
int main() {
    for ( int i =10; i<=50; i++) {
        if ( i % 2 ==0){
            cout<<i<<endl;
        }
    }
}

