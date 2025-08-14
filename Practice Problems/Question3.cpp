//WAP to sum n numbers 

#include <iostream>
using namespace std;
int main() {
    int a,n, sum=0;
    cout<<"Enter a number";
    cin>>a;
    for(a=1; a<=n; a++){
        sum += a;
    }
    cout<<"Sum of the given number is: "<< sum<<endl;
}