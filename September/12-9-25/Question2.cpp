/*
Given an array. Find the leader in an array. A leader in an array is defined as a value that is strictly greater than all the values to its right in the given array. For example:

arr[] = {91,3,54, 2,15, 47, 2, 1}

output: {91,54,15,47,1}*/
#include <iostream>
using namespace std;

int main() {
    int arr[] = {91, 3, 54, 2, 15, 47, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Leaders: ";
    for (int i = 0; i < n; i++) {
        bool isLeader = true;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] <= arr[j]) {
                isLeader = false;
                break;
            }
        }
        if (isLeader) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
    return 0;
}