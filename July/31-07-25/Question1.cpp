//You are driving on a road and want to avoid speeding ticket speed limit is 60km/hr . If you exceed the speed limit by 10km/hr you get a 
//speeding ticket. Write a c++ program  and take the spped as user input and check if you will get a speeding ticket or not.

#include <iostream>
using namespace std;
int main() {
    int speed, speed_limit = 60;
    cout<<"Enter the speed of car in km/hr:";
    cin>>speed;
    if (speed > speed_limit){
        if (speed > speed_limit + 10) {
            cout << "You will get a speeding ticket." << endl;
        } else {
            cout<< "Drive Safe!!" << endl;
    }
}
}