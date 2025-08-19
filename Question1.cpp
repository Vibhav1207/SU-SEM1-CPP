//Develop a system to calculate the saving of a person in following category Cat 1:_ income = 1000 expenses = 50 daoving after first month ?, after 4 months , after 10 years , Catogery 2 earning = 1500 expenses = 750 , catogery 3 earning = 1800 , expenses=1200 rest is same in future i can have multiple workers 

#include <iostream>
using namespace std;

int getDaysInMonth(int month, int year) {
    // month: 1=Jan, ..., 12=Dec
    int month_days[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    if (month == 2) { // February
        // Leap year check
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
            return 29;
    }
    return month_days[month-1];
}

int main() {
    int category;
    cout << "Enter category (1, 2, or 3): ";
    cin >> category;

    int daily_income = 0, daily_expenses = 0;
    switch (category) {
        case 1:
            daily_income = 1000;
            daily_expenses = 50;
            break;
        case 2:
            daily_income = 1500;
            daily_expenses = 750;
            break;
        case 3:
            daily_income = 1800;
            daily_expenses = 1200;
            break;
        default:
            cout << "Invalid category." << endl;
            return 0;
    }

    int start_month, start_year;
    cout << "Enter starting month (1=Jan, ..., 12=Dec): ";
    cin >> start_month;
    cout << "Enter starting year (e.g., 2025): ";
    cin >> start_year;

    
    int days_in_4_months = 0;
    int month = start_month;
    int year = start_year;
    for (int i = 0; i < 4; ++i) {
        days_in_4_months += getDaysInMonth(month, year);
        month++;
        if (month > 12) {
            month = 1;
            year++;
        }
    }

    // For 1 month, use the first month
    int days_in_1_month = getDaysInMonth(start_month, start_year);

    // For 10 years, count leap years
    int years = 10;
    int leap_years = 0;
    for (int y = start_year; y < start_year + years; ++y) {
        if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
            leap_years++;
    }
    int days_in_10_years = years * 365 + leap_years;

    int savings_1_month = (daily_income - daily_expenses) * days_in_1_month;
    int savings_4_months = (daily_income - daily_expenses) * days_in_4_months;
    int savings_10_years = (daily_income - daily_expenses) * days_in_10_years;

    cout << "Savings after 1 month (" << days_in_1_month << " days): " << savings_1_month << endl;
    cout << "Savings after 4 months (" << days_in_4_months << " days): " << savings_4_months << endl;
    cout << "Savings after 10 years (" << days_in_10_years << " days, including " << leap_years << " leap years): " << savings_10_years << endl;

    return 0;
}