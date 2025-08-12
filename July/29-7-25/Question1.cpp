//WAP to check if student precent is above 90 then grade A , if 75-89 then grade B , if 50-79 then grade C and if less then 50 grade F
#include <iostream>
using namespace std;

int main() {
    float percentage;
    cout << "Enter the student's percentage: ";
    cin >> percentage;

   if (percentage >= 90) {
        cout << "Grade A" << endl;
   } else if (percentage >= 75) {
        cout << "Grade B" << endl;
   } else if (percentage >= 50) {
        cout << "Grade C" << endl;
   } else {
        cout << "Grade F" << endl;
   }
}
