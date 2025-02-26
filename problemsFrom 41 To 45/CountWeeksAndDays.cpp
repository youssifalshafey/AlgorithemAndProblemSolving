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
stWeeksAndDays checkDays(int day)
{
    stWeeksAndDays weeksAndDays;
    
    if (day == weeksAndDays.saterDay)
    {
        cout << "Welcome In SaterDay Mode";
    }else if(day == weeksAndDays.sunDay){
        cout<<"Welcome In SunDay Mode";
    }
    else if(day == weeksAndDays.Monday){
        cout<<"Welcome In Monday Mode";
    }
    else if(day == weeksAndDays.TusDay){
        cout<<"Welcome In TusDay Mode";
    }
    else if(day == weeksAndDays.wednesDay){
        cout<<"Welcome In wednesDay Mode";
    }
    else if(day == weeksAndDays.ThursDay){
        cout<<"Welcome In ThursDay Mode";
    }
    else if(day == weeksAndDays.Friday){
        cout<<"Welcome In Friday Mode";
    }
    return weeksAndDays;
}
int main()
{
    int totalDays = readNumberOfDays("Enter Number Of Days : \n1 ) SaterDay \n2 ) Sunday \n3 ) MonDay \n4 )TusDay\n5 ) WednesDay\n6 )ThursDay\n7 )Friday\n ");
    checkDays(totalDays);
}