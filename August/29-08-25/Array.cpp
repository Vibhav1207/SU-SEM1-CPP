//ARRAY EXAMPLE

#include <iostream>
using namespace std;
int main(){
    int arr[3]={1,2,5};  /*If you declare int data type then array also in integer same goes with other datatypes*/
    cout<<arr[1]<<" "; //Accessing particular value of index
    

    //Itterate the arry
    for (int i =0;i<3;i++){
       cout<<arr[i]<< " "<<endl;
    }
}