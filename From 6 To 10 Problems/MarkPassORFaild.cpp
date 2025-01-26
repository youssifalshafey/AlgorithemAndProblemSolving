#include <iostream>
using namespace std;
enum enMarks
{
    Pass = 1,
    Faild = 2
};
int readNumberFormUser()
{
    int number = 0;
    cout << "Please Enter A Number : ";
    cin >> number;
    return number;
}

enMarks CheckNumebr(int number)
{
    if (number >= 50)
        return enMarks::Pass;
    else
        return enMarks::Faild;
}

void printStatus(int number)
{
    if (CheckNumebr(number) == enMarks::Pass)
        cout << "Passed";
    else if (CheckNumebr(number) == enMarks::Faild)
        cout << "Faild";
}
int main()
{
    printStatus(readNumberFormUser());
}