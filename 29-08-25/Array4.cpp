//Taking user-input in array 

#include <iostream>
using namespace std;
int main() {
    int arr[3];
    for (int i=0;i<3;i++){
        cin>>arr[i];
    }
    cout<<"Values in the array"<<endl;
    for(int i=0;i<3;i++){
        cout<<"index"<<i<<": "<<arr[i]<<endl;
    }
}