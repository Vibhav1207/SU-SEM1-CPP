//EXAMPLE 3

#include <iostream>
using namespace std;
void f(int &p){
    p =100;
}
int main() {
    int a = 25;
    f(a);
    cout<<a;
}