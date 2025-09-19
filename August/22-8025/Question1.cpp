//Write a fucntion ot find the summation of n natural numbers

#include <iostream>
using namespace std;
int sum() {
 int a,n,sum=0;
 cout<<"Enter a positive number: ";
 cin>> n;
 sum = (n*(n+1))/2;
 cout<<"The summation of first "<<n<<" natural numbers is: "<<sum;
 return 0;
}
int main() {
 sum();
}