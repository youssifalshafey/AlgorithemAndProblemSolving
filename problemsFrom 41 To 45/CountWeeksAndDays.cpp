#include <iostream>
using namespace std;
struct stWeeksAndDays
{
    int saterDay = 1, sunDay = 2, Monday = 3, TusDay = 4, wednesDay = 5, ThursDay = 6, Friday = 7;
};

int readNumberOfDays(string msg)
{
    int days;
    cout << msg;
    cin >> days;
    return days;
}

int main()
{
    int totalDays = readNumberOfDays("Enter Number Of Days : ");
    cout << totalDays;
}