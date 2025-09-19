//WAP to print pattern * , * * *, * * * * *, * * * * * * *

#include <iostream>
using namespace std;


void printTriangle(int n)
{
    for (int i = 0; i < n; i++) {
        
        for (int space = 0; space < n - i - 1; space++)
            cout << "  ";
       
        for (int star = 0; star < 2 * i + 1; star++)
            cout << "* ";
        cout << endl;
    }
}

int main()
{
    printTriangle(4);
    return 0;
}