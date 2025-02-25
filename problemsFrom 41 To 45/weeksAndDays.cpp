#include <iostream>
using namespace std;
int readHours(string msg)
{
    int hours;
    cout << msg;
    cin >> hours;
    return hours;
}

float calculateDays(int hours)
{
    float days = (float)hours / 24;
    return days;
}
float calculatWeeks(float days)
{
    float weeks = days / 7;
    return weeks;
}

int main()
{
    int numberOfHours = readHours("Please Enter Your Total Hours ");
    cout << "\nYour Total Hours Is : " << numberOfHours;
    cout << "\nYour Total days Is : " << calculateDays(numberOfHours);
    cout << "\nYour Total Weeks Is : " << calculatWeeks(calculateDays(numberOfHours));
}