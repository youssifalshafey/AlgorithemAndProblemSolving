#include <iostream>
using namespace std;

int readNumberFormUser()
{
    int number = 0;
    cout << "Please Enter A Number : ";
    cin >> number;
    return number;
}

int CheckNumebr(int number)
{
    if (number > 0)
        return number;
    else
        while (number < 0)
        {
            cout << "Please Enter The Number : ";
            cin >> number;
        }
    return number;
}

float getHalfNumber(int number)
{
    float halfNumber =(float) number / 2;
    return halfNumber;
}

void printHalfNumber(int number)
{
    string halfNumber = "The Half Number Of Your Number " + to_string(number) + " Is " + to_string(getHalfNumber(number));
    cout << halfNumber;
}
int main()
{
    printHalfNumber(CheckNumebr(readNumberFormUser()));
}