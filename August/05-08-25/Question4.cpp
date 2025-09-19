//WAP Find the summation of n natural numbers using for loop
#include <iostream>
using namespace std;
int main() {
    int a, n , sum=0;
    cout << "Enter a positive integer: ";
    cin >> n;
    for(a=1; a<=n; a++)
        sum += a;
    cout << "The summation of first " << n << " natural numbers is: " << sum << endl;
    return 0;
}