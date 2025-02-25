#include <iostream>
using namespace std;
struct strdaysandOther
{
    int days, hours, minuts, seconds;
};

int readAPositiveNumber(string msg)
{
    int numebrOfSeconds;

    do
    {
        cout << msg;
        cin >> numebrOfSeconds;
    } while (numebrOfSeconds <= 0);
    return numebrOfSeconds;
}

strdaysandOther calculatNumberOfDaysAndOther(int seconds)
{
    strdaysandOther daysAndOther;
    daysAndOther.days = seconds / (24 * 60 * 60);
    seconds %= (24 * 60 * 60);
    daysAndOther.hours = seconds / (60 * 60);
    seconds %= (60 * 60);
    daysAndOther.minuts = seconds / 60;
    daysAndOther.seconds = seconds % 60;
    return daysAndOther;
}
void printtaskDuration(strdaysandOther taskDuration)
{

    cout << taskDuration.days << " : " << taskDuration.hours << " : " << taskDuration.minuts << " : " << taskDuration.seconds;
}
int main()
{
    int totalSeconds = readAPositiveNumber("Please Enter A Positive Number : ");
    printtaskDuration(calculatNumberOfDaysAndOther(totalSeconds));
    return 0;
}