//WAP to print numbers divisible by 7, from 1 to 70
#include <iostream>
using namespace std;
int main() {
    for (int i =1; i <=70; i++){
        if (i % 7 == 0){
            cout<<i<<endl;
        }
    }
}