//Take a string user-input  check number of vowels present in it 

#include <iostream>
using namespace std;
int main() {
    string str;
    int count=0;
    cout<<"Enter a sentence: ";
    ;
    for (int q=0; q < str.length(); q++){
        if (str[q] == 'a' || str[q] == 'e' || str[q] == 'i' || str[q] == 'o' || str[q] == 'u'){
            count++;
        }
    }
    cout<<"Total number of vowels are "<<count<<endl;
    return 0;
}