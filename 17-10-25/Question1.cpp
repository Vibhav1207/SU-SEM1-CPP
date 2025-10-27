/* 
Given an array arr of positive integers and an integer x. Return the frequency of x in the array.

Examples :

Input: arr = [1, 1, 1, 1, 1], x = 1
Output: 5
Explanation: Frequency of 1 is 5.
Input: arr = [1, 2, 3, 3, 2, 1], x=2
Output: 2
Explanation: Frequency of 2 is 2.
Constraints:
1 <= arr.size() <= 105
1 <= arr[i] <= 105
1 <= x <= 105


*/

#include <iostream>
#include <map>

using namespace std;
int main() {
    map <int, int> mp;
    int m,x;
    cout<<"Enter size of array:";
    cin>>m;
    int arr[m];
    cout<<"Enter array elements:";
    for (int i=0; i<m; i++){
        cin>>arr[i];
        mp[arr[i]]++;
    }
    cout<<"Enter element to find frequency:";
    cin>>x;
    cout<<"Frequency of "<<x<<" is "<<mp[x];
    
}