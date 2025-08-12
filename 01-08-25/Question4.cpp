//WAP to print only odd numbers from 10 -50 ( 10 and 50 included) 

#include <iostream>
using namespace std;
int main() {
    for ( int i =10; i<=50; i++) {
        if ( i % 2 ==1){
            cout<<i<<endl;
        }
    }
}

