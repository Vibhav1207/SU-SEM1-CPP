#include <iostream>
using namespace std;
int main(){
    int a = 6;
    cout<<&a<<endl;
    int *p = &a;
    cout<<p<<endl;
    cout<<*p<<endl; // * represents value at address
}