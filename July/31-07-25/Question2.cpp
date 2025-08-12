//You are driving on a road and want to avoid speeding ticket . If you exceed the speed limit by 10km/hr you get a 
//speeding ticket. Write a c++ program  and take the spped as user input and check if you will get a speeding ticket or not. 
//This time take the spped limit from user input

#include <iostream>
using namespace std;
int main() {
    int speed, speed_limit;
    cout << "Enter the speed limit in km/hr:";
    cin>> speed_limit;
    cout << "The speed limit is set to " << speed_limit << " km/hr." << endl;
    cout<< "Enter the speed of the car km/hr:";
    cin>>speed;
    if (speed > speed_limit) {
        if (speed > speed_limit + 10){
            cout<<"You will get ticket" << endl;
        }else{
            cout<<"Drive safe!!"<<endl;
        }
    }
}
