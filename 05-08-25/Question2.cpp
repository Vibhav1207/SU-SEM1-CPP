//WAP to print numbers divisible by 17 from 25 to 100
#include <iostream>
using namespace std;
int main() {
    for (int i =25; i <=100; i++){
        if (i % 17 == 0){
            cout<<i<<endl;
        }
    }
}