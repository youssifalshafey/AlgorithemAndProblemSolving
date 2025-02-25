#include <iostream>
using namespace std;

int readData(string msg)
{
    int numberOfInput;
    cout
        << msg;
    cin >> numberOfInput;
    return numberOfInput;
}
float convertMinutsToSeconds(int minuts)
{
    return minuts * 60;
}
float convertHoursToMinutsThenSeconds(int hours)
{
    return hours * 60 * 60;
}
float convertDays(int days)
{
    return days * 24 * 60 * 60;
}
int main()
{
    int days = readData("Please Enter The Days : ");
    int hours = readData("Please Enter The Hours : ");
    int minuts = readData("Please Enter The Minuts : ");
    int seconds = readData("Please Enter The Seconds : ");
    cout << "\nYour Data Is : \n";
    cout << "\n days : " << days << " Hours " << hours << " minuts " << minuts << " Sconds " << seconds;
    cout << "After Convert You Have Got " << convertMinutsToSeconds(minuts) + convertHoursToMinutsThenSeconds(hours) + convertDays(days) + seconds;
}